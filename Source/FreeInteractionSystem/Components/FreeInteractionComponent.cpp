// Fill out your copyright notice in the Description page of Project Settings.


#include "FreeInteractionComponent.h"
#include "FreeInteractableComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/Engine.h"
#include "FreeInteractionSystem/Actors/PostprocessActor.h"
#include "UObject/ConstructorHelpers.h"
#include "InputAction.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Engine/HitResult.h"
#include "Materials/MaterialInterface.h"


class UFreeInteractableComponent;
// Sets default values for this component's properties
UFreeInteractionComponent::UFreeInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// load default Post process material for Highlight
	if (bUseHighlightOutline) {
		static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialFinder(TEXT("/Script/Engine.MaterialInstanceConstant'/FreeInteractionSystem/Materials/PPMI_Outline.PPMI_Outline'"));
		HighlightOutlinePostProcessMaterial = MaterialFinder.Object;
	}

	
}


// Called when the game starts
void UFreeInteractionComponent::BeginPlay()
{
	Super::BeginPlay();
	
	Camera = GetOwner()->GetComponentByClass<UCameraComponent>();
	if(IsValid(Camera) == false)
	{
		UE_LOG(LogTemp,Error, TEXT("Interaction Error : Interaction Owner  has no Camera Component, Interaction will not work"));
	}

	// spawn post process volume
	if(bUseHighlightOutline && HighlightOutlinePostProcessMaterial.IsNull() == false)
	{
		if(APostprocessActor* PostprocessActor = GetWorld()->SpawnActor<APostprocessActor>(APostprocessActor::StaticClass()))
		{
			PostprocessActor->SetPostProcessMaterial(HighlightOutlinePostProcessMaterial);
		}
	}

	// get inhancedInputComponent
	if (APawn* OwningPawn = Cast<APawn>(GetOwner())) {
		InputCompponent = OwningPawn->GetController()->GetComponentByClass<UEnhancedInputComponent>();
		
		if (IsValid(InputCompponent) == false)
		{
			UE_LOG(LogTemp, Error, TEXT("Interaction Error : Interaction Owner  has no Enhanced Input Component, make sure enhanced input settings are correct in the project settings"));
		}
	}

}


// Called every frame
void UFreeInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                                    FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	CheckCounter -= DeltaTime;
	if(CheckCounter <= 0.0f)
	{
		CheckInteraction();

		CheckCounter = CheckForInteractionInterval;
	}
	
	if(bHoldInteracting)
	{
		HoldInteractingTimeCounter+= DeltaTime;
		HoldInteractingTimeCounter = FMath::Clamp(HoldInteractingTimeCounter, 0.f, HoldInteractingTime);
		
		if(FMath::IsNearlyEqual(HoldInteractingTimeCounter,HoldInteractingTime))
		{
			UpdateInteraction(1.0f,true);
			
		}else
		{
			float Alpha =  HoldInteractingTimeCounter / HoldInteractingTime;
			UpdateInteraction(Alpha,false);

		}

	}
}


void UFreeInteractionComponent::StartInteraction()
{

	// when we start interacting there needs to be an interactable on focus

	if(FocusedInteractable == nullptr) return;

	bInteractionEnded = false;
	
	FocusedInteractable->OnInteractStarted(this);
	if(OnInteractStarted.IsBound())
	{
		OnInteractStarted.Broadcast(FocusedInteractable);
	}
	
	
	// get interaction data
	bool bRequiresTime = FocusedInteractable->InteractionType == EInteractionSystemType::HoldForDuration;
	HoldInteractingTime = FocusedInteractable->TimeToInteract;

	// if it is a single click interaction or the time is very small, we just success the interaction (As long as the interactable item is still in focus)
	if(bRequiresTime == false || HoldInteractingTime < 0.005f)
	{
		bInteractionSucceeded = true;
	}else
	{
		bHoldInteracting = true;
	}
}




void UFreeInteractionComponent::UpdateInteraction(float Alpha,bool bCompleted)
{
	// the interaction time is ended
	if(FocusedInteractable)
	{
		FocusedInteractable->OnInteractUpdate(this,Alpha);
	}

	if(bCompleted)
	{
		bInteractionSucceeded = true;
		EndInteraction();
	}

	if(OnInteractUpdate.IsBound())
	{
		OnInteractUpdate.Broadcast(FocusedInteractable , Alpha);
	}
	
}

void UFreeInteractionComponent::EndInteraction()
{
	if(bInteractionEnded) return;
	bInteractionEnded = true;
	
	// interaction is successful
	if(FocusedInteractable)
	{
		FocusedInteractable->OnInteractEnded(this, bInteractionSucceeded);
	}

	if(OnInteractFinished.IsBound())
	{
		OnInteractFinished.Broadcast(FocusedInteractable, bInteractionSucceeded);
	}
	

	bHoldInteracting = false;
	bInteractionSucceeded = false;
	HoldInteractingTime = 0.0f;
	HoldInteractingTimeCounter = 0.0f;
}

void UFreeInteractionComponent::CheckInteraction()
{
	// Query parameters
	FCollisionQueryParams QueryParams;
	QueryParams.bTraceComplex = false; 
	QueryParams.bReturnPhysicalMaterial = false; // No need for physical material

	FVector StartLoc = GetCameraTransform().GetLocation();
	FVector EndLoc = StartLoc + GetCameraTransform().GetRotation().GetForwardVector() * MaxInteractDistance;
	
	// Perform the overlap query
	FHitResult OutHit;
	GetWorld()->LineTraceSingleByChannel(OutHit ,StartLoc , EndLoc ,TraceChannel , QueryParams);

	bool bNoInteract = false;

	
	if(OutHit.bBlockingHit)
	{
		
		// we hit an object
		if(UFreeInteractableComponent* FoundInteractableComponent = OutHit.GetActor()->GetComponentByClass<UFreeInteractableComponent>())
		{
			// the object is interactable
			if(FoundInteractableComponent->CanInteract(this))
			{
				
				// first time interacting
				if(FocusedInteractable == nullptr)
				{
					InteractableOnFocus(FoundInteractableComponent);
				}else
				{
					// we already have an interactable

					// let's see if we are already  focusing this interactable 
					if(FoundInteractableComponent  == FocusedInteractable)
					{
						// no action required for now
					}else
					{
						// we already have an interactable, but it is a new one and we are not focusing it
						// unfocus the currently focused one if still valid
						CurrentInteractableLostFocus();
						
						// start focusing the new one
						InteractableOnFocus(FoundInteractableComponent);
					}
				}
			}else
			{
				bNoInteract = true;
			}
		}else
		{
			bNoInteract = true;
		}
		
	}else 
	{
		bNoInteract = true;
	}


	// DrawDebugLine(GetWorld() ,StartLoc, EndLoc, bNoInteract == false ? FColor::Green : FColor::Red , false, 0.2 , 0,4);



	if(bNoInteract && IsValid(FocusedInteractable))
	{
		// this means either no actor hit or the hit actor is not interactable (or can not interact at the moment)

		CurrentInteractableLostFocus();
	}
}


void UFreeInteractionComponent::InteractableOnFocus(UFreeInteractableComponent* InteractableComponent)
{
	if(IsValid(InteractableComponent))
	{
		InteractableComponent->OnFocusStarted(this);
		FocusedInteractable = InteractableComponent;
	}
	if(OnFocusStarted.IsBound())
	{
		OnFocusStarted.Broadcast(InteractableComponent);
	}

	// bind input
	BindInteractabelInput(InteractableComponent);

}

void UFreeInteractionComponent::CurrentInteractableLostFocus()
{
	if (IsValid(FocusedInteractable) == false) return;

	if(OnFocusLost.IsBound())
	{
		OnFocusLost.Broadcast(FocusedInteractable);
	}

	if (bHoldInteracting)
	{
		EndInteraction();
	}

	FocusedInteractable->OnFocusEnded(this);

	// unbinnd input 
	UnBindInteractableInput(FocusedInteractable);

	FocusedInteractable = nullptr;

}

void UFreeInteractionComponent::BindInteractabelInput(const UFreeInteractableComponent* InInteractable)
{
	if (IsValid(InInteractable) == false || IsValid(InputCompponent) == false) return;

	UInputAction* TargetInputAction;

	// lets check if we have custom input ?
	if (InInteractable->CustomInputAction.IsNull() == false) {
		TargetInputAction = InInteractable->CustomInputAction.LoadSynchronous();
	}
	else {
		// otherwise just use default
		TargetInputAction = DefaultInteractionInputAction.LoadSynchronous();
	}

	if (IsValid(TargetInputAction) == false) return;

	StartInteractBindHandle =  InputCompponent->BindAction(TargetInputAction,ETriggerEvent::Started, this, &UFreeInteractionComponent::StartInteraction).GetHandle();
	EndInteractBindHandle   = InputCompponent->BindAction(TargetInputAction, ETriggerEvent::Completed, this, &UFreeInteractionComponent::EndInteraction).GetHandle();
}

void UFreeInteractionComponent::UnBindInteractableInput(const UFreeInteractableComponent* InInteractable)
{
	InputCompponent->RemoveBindingByHandle(StartInteractBindHandle);
	InputCompponent->RemoveBindingByHandle(EndInteractBindHandle);

	// call end interaction explicitly
	EndInteraction();
}


FTransform UFreeInteractionComponent::GetCameraTransform()
{
	if(Camera == nullptr) return FTransform();
	return Camera->GetComponentTransform();
}
