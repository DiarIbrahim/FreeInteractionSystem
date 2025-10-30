// Fill out your copyright notice in the Description page of Project Settings.


#include "FreeInteractionHelperLibrary.h"
#include "FreeInteractionSystem/Components/FreeInteractableComponent.h"
#include "FreeInteractionSystem/Components/FreeInteractionComponent.h"
#include "EnhancedinputComponent.h"

FKey UFreeInteractionHelperLibrary::GetInteractionKey(UFreeInteractionComponent* InteractionComponent, UFreeInteractableComponent* InteractableComponent)
{
	if (IsValid(InteractionComponent) == false || IsValid(InteractableComponent) == false) return FKey();

	if (InteractableComponent->CustomInputAction.IsNull() == false && InteractableComponent->CustomInputkeyForUI.IsValid()) {
		return InteractableComponent->CustomInputkeyForUI;
	}
	else {
		return InteractionComponent->DefaultInputkeyForUI;
	}
}

FText UFreeInteractionHelperLibrary::GetInteractionKeyText(UFreeInteractionComponent* InteractionComponent, UFreeInteractableComponent* InteractableComponent)
{
	return GetInteractionKey(InteractionComponent, InteractableComponent).GetDisplayName();
}
