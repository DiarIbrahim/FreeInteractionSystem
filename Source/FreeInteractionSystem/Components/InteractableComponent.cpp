﻿// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableComponent.h"

#include "InteractionComponent.h"
#include "Camera/CameraComponent.h"
#include "Engine/Engine.h"


// Sets default values for this component's properties
UInteractableComponent::UInteractableComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	

	
}

bool UInteractableComponent::CanInteract_Implementation(UInteractionComponent* Interactor)
{
	if(Interactor == nullptr) return false;

	FVector InteractorLoc = Interactor->GetOwner()->GetActorLocation();
	FVector SelfLoc = GetOwner()->GetActorLocation();

	if(FVector::Distance(InteractorLoc, SelfLoc) > InteractionDistance)
	{
		return false;
	}
	
	return true;
}

void UInteractableComponent::OnFocusStarted(UInteractionComponent* Interactor)
{
}

void UInteractableComponent::OnFocusEnded(UInteractionComponent* Interactor)
{
}

void UInteractableComponent::OnInteractStarted(UInteractionComponent* Interactor)
{
}

void UInteractableComponent::OnInteractUpdate(UInteractionComponent* Interactor, float Alpha)
{
}

void UInteractableComponent::OnInteractEnded(UInteractionComponent* Interactor, bool bSuccess)
{
}

// Called when the game starts
void UInteractableComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInteractableComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                           FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
