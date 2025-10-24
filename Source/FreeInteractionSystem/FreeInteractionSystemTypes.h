// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FreeInteractionSystemTypes.generated.h"


class UTexture2D;


UENUM(BlueprintType)
enum EInteractionSystemType
{
	SingleClick = 0  UMETA(DisplayName = "Single Click"),
	HoldForDuration  UMETA(DisplayName = "Hold for Duration"),
};


USTRUCT(BlueprintType)
struct FInteractableVisualData
{
	GENERATED_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Interactable|Visual Appearance")
	UTexture2D* ItemIcon = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Interactable|Visual Appearance")
	FText ItemName = {};
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="Interactable|Visual Appearance")
	FText ItemDescription = {};
};
	

