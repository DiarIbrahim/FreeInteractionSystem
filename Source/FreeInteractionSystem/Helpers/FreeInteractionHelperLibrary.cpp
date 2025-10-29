// Fill out your copyright notice in the Description page of Project Settings.


#include "FreeInteractionHelperLibrary.h"
#include "FreeInteractionSystem/Components/InteractableComponent.h"
#include "FreeInteractionSystem/Components/InteractionComponent.h"
#include "EnhancedinputComponent.h"

FKey UFreeInteractionHelperLibrary::GetInteractionKey(UInteractionComponent* InteractionComponent, UInteractableComponent* InteractableComponent)
{
	if (IsValid(InteractionComponent) == false || IsValid(InteractableComponent) == false) return FKey();

	if (InteractableComponent->CustomInputAction.IsNull() == false && InteractableComponent->CustomInputkeyForUI.IsValid()) {
		return InteractableComponent->CustomInputkeyForUI;
	}
	else {
		return InteractionComponent->DefaultInputkeyForUI;
	}
}

FText UFreeInteractionHelperLibrary::GetInteractionKeyText(UInteractionComponent* InteractionComponent, UInteractableComponent* InteractableComponent)
{
	return GetInteractionKey(InteractionComponent, InteractableComponent).GetDisplayName();
}
