// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FreeInteractionSystemTypes.generated.h"


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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* ItemIcon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ItemName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ItemDescription;
};
	

