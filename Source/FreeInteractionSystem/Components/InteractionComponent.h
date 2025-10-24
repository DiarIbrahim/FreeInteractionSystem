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


	// how frequently check for interactable Actors, 0.0 means on tick
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category="Ineraction")
	float CheckForInteractionInterval = 0.1f;
	/* 
	 * when the interactable actor's Interaction type is requiring some time to complete the interaction (see @TimeToInteract in Interactable component)
	 * should we go ahead and call the end interaction automatically ?
	*/ 
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category="Ineraction")
	bool bCallEndInteractionAfterTimedInteractionFinished = true;

	// channel used to trace for interactable objects
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category="Ineraction")
	TEnumAsByte<ECollisionChannel> TraceChannel = ECC_Visibility;

	// max disstance that we can detect an interactable object
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category="Ineraction")
	float MaxInteractDistance = 1200;

	// should we highlight the interacttable we are focusing on.
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category="Ineraction|Advanced")
	bool bUseHighlightOutline = true;

	// post process material used for highlight
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category="Ineraction|Advanced" , meta=(EditCondition="bUseHighlightOutline"))
	TSoftObjectPtr<UMaterialInterface> HighlightOutlinePostProcessMaterial;

	
	UFUNCTION(BlueprintCallable, Category="Ineraction")
	void StartInteraction();

	void UpdateInteraction(float Alpha, bool bCompleted);
	
	UFUNCTION(BlueprintCallable, Category="Ineraction")
	void EndInteraction();


	UPROPERTY(BlueprintAssignable, Category="Ineraction")
	FOnInteractionSigniture OnFocusStarted;
	UPROPERTY(BlueprintAssignable, Category="Ineraction")
	FOnInteractionSigniture OnFocusLost;

	UPROPERTY(BlueprintAssignable, Category="Ineraction")
	FOnInteractionSigniture OnInteractStarted;
	UPROPERTY(BlueprintAssignable, Category="Ineraction")
	FOnInteractionUpdateSigniture OnInteractUpdate;
	UPROPERTY(BlueprintAssignable, Category="Ineraction")
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
	// called when currently focused interactable lost focus
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
	bool bInteractionEnded = false;
	float CheckCounter = 0.0f;

};
