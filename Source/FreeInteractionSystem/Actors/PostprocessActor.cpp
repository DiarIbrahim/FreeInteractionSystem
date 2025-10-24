// Fill out your copyright notice in the Description page of Project Settings.


#include "PostprocessActor.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/PostProcessComponent.h"


APostprocessActor::APostprocessActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>("PostProcessComponent");
	PostProcessComponent->bUnbound = true;
	
}

// Sets default values

void APostprocessActor::SetPostProcessMaterial(const TSoftObjectPtr<UMaterialInterface>& SoftMaterialReference)
{
	// Create and set a dynamic material instance for the post-process material
	if (IsValid(PostProcessComponent) && SoftMaterialReference.IsNull() == false)
	{
		UMaterialInterface* PostProcessMaterial = SoftMaterialReference.LoadSynchronous();
		UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(PostProcessMaterial, this);
		PostProcessComponent->Settings.WeightedBlendables.Array.Add(FWeightedBlendable(1.0f, DynamicMaterial));
	}
}

