// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "InteractionComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractionSigniture , UInteractableComponent* , Interactable);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionUpdateSigniture , UInteractableComponent* , Interactable, float, Alpha);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionFinishSigniture , UInteractableComponent* , Interactable, bool, bSuccess);


class UInteractableComponent;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class FREEINTERACTIONSYSTEM_API UInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInteractionComponent();

	
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float CheckForInteractionInterval = 0.1f;
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TEnumAsByte<ECollisionChannel> TraceChannel;
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	bool bDebugMessages = false;
	float MaxInteractDistance = 1200;
	
	UFUNCTION(BlueprintCallable)
	void StartInteraction();
	void UpdateInteract(float Alpha, bool bCompleted);
	UFUNCTION(BlueprintCallable)
	void EndInteraction();


	UPROPERTY(BlueprintAssignable)
	FOnInteractionSigniture OnFocusStarted;
	UPROPERTY(BlueprintAssignable)
	FOnInteractionSigniture OnFocusLost;

	UPROPERTY(BlueprintAssignable)
	FOnInteractionSigniture OnInteractStarted;
	UPROPERTY(BlueprintAssignable)
	FOnInteractionUpdateSigniture OnInteractUpdate;
	UPROPERTY(BlueprintAssignable)
	FOnInteractionFinishSigniture OnInteractFinished;

	void CheckInteraction();

	FTransform GetCameraTransform();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;



	// called when an interactable went on focus
	void InteractableOnFocus(UInteractableComponent* InteractableComponent);
	// called when currently focused component lost focus
	void CurrentInteractableLostFocus();
	
private:
	UPROPERTY()
	class UCameraComponent* Camera;
	UPROPERTY()
	UInteractableComponent* FocusedInteractable;

	bool bHoldInteracting = false;
	float HoldInteractingTime = 0.0f;
	float HoldInteractingTimeCounter = 0.0f;
	bool bInteractionSucceeded = false;

	float CheckCounter = 0.0f;

};
