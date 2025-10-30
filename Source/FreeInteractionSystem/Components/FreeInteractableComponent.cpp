// Fill out your copyright notice in the Description page of Project Settings.


#include "FreeInteractableComponent.h"

#include "FreeInteractionComponent.h"
#include "Components/MeshComponent.h"
#include "Engine/Engine.h"


// Sets default values for this component's properties
UFreeInteractableComponent::UFreeInteractableComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	

	
}

bool UFreeInteractableComponent::CanInteract_Implementation(UFreeInteractionComponent* Interactor)
{
	if(Interactor == nullptr) return false;

	FVector InteractorLoc = Interactor->GetOwner()->GetActorLocation();
	FVector SelfLoc = GetOwner()->GetActorLocation();

	if( !FMath::IsNearlyZero(InteractionDistance) && FVector::Distance(InteractorLoc, SelfLoc) > InteractionDistance)
	{
		return false;
	}
	
	return true;
}

void UFreeInteractableComponent::OnFocusStarted(UFreeInteractionComponent* Interactor)
{
	if(bShowHighlightOnFocus)
	{
		SetRenderCustomDepth(true);
	}
	if(OnFocusStartedDelegate.IsBound()){
		OnFocusStartedDelegate.Broadcast(Interactor);
	}
}

void UFreeInteractableComponent::OnFocusEnded(UFreeInteractionComponent* Interactor)
{
	if(bShowHighlightOnFocus)
	{
		SetRenderCustomDepth(false);
	}
	
	if(OnFocusEndedDelegate.IsBound()){
		OnFocusEndedDelegate.Broadcast(Interactor);
	}
}

void UFreeInteractableComponent::OnInteractStarted(UFreeInteractionComponent* Interactor)
{
	if(OnInteractStartedDelegate.IsBound())
	{
		OnInteractStartedDelegate.Broadcast(Interactor);
	}
}

void UFreeInteractableComponent::OnInteractUpdate(UFreeInteractionComponent* Interactor, float Alpha)
{
	if(OnInteractUpdatedDelegate.IsBound())
	{
		OnInteractUpdatedDelegate.Broadcast(Interactor, Alpha);
	}
}

void UFreeInteractableComponent::OnInteractEnded(UFreeInteractionComponent* Interactor, bool bSuccess)
{
	if(OnInteractEndedDelegate.IsBound())
	{
		OnInteractEndedDelegate.Broadcast(Interactor, bSuccess);
	}
}

void UFreeInteractableComponent::SetRenderCustomDepth(const bool InValue)
{
	for(UActorComponent* Comp : GetOwner()->GetComponents())
	{
		if(UMeshComponent* MeshComp = Cast<UMeshComponent>(Comp))
		{
			MeshComp->SetRenderCustomDepth(InValue);
		}
	}
}

