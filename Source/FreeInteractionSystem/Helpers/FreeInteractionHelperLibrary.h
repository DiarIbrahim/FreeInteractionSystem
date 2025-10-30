// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FreeInteractionHelperLibrary.generated.h"

class UInputAction;
class UFreeInteractionComponent;
class UFreeInteractableComponent;


/**
 * 
 */
UCLASS()
class FREEINTERACTIONSYSTEM_API UFreeInteractionHelperLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = "Free Interaction Helpers|Inputs")
	static FKey GetInteractionKey(UFreeInteractionComponent* InteractionComponent, UFreeInteractableComponent* InteractableComponent);

	UFUNCTION(BlueprintCallable, Category = "Free Interaction Helpers|Inputs")
	static FText GetInteractionKeyText(UFreeInteractionComponent* InteractionComponent, UFreeInteractableComponent* InteractableComponent);

};
