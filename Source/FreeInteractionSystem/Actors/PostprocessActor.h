// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PostprocessActor.generated.h"

class UPostProcessComponent;
class UMaterialInterface;

UCLASS()
class FREEINTERACTIONSYSTEM_API APostprocessActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APostprocessActor();

	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="Postprocess")
	UPostProcessComponent* PostProcessComponent;

	void SetPostProcessMaterial(const TSoftObjectPtr<UMaterialInterface>& SoftMaterialReference);
};
