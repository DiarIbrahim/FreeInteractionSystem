// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"



UENUM(BlueprintType)
enum EInteractionSystemType
{
	SingleClick = 0  UMETA(DisplayName = "Single Click"),
	HoldForDuration  UMETA(DisplayName = "Hold for Duration"),
}; 
	

