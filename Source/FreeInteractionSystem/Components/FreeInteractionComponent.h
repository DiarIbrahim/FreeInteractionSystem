// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "FreeInteractionComponent.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractionSigniture , UFreeInteractableComponent* , Interactable);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionUpdateSigniture , UFreeInteractableComponent* , Interactable, float, Alpha);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInteractionFinishSigniture , UFreeInteractableComponent* , Interactable, bool, bSuccess);


class UFreeInteractableComponent;
class UInputAction;
class UEnhancedInputComponent;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class FREEINTERACTIONSYSTEM_API UFreeInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UFreeInteractionComponent();


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

	// Inputs

	// the default interaction input, used for any interactable that has no InputAction specified for.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ineraction|Input")
	TSoftObjectPtr<UInputAction> DefaultInteractionInputAction;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ineraction|Input")
	FKey DefaultInputkeyForUI = EKeys::F;

	// should be called explicitly when interaction input is pressed, starts the interaction with the object on focus, the call will be ignored when no interactable actor is on focus
	UFUNCTION(BlueprintCallable, Category="Ineraction")
	void StartInteraction();

	void UpdateInteraction(float Alpha, bool bCompleted);
	
	// end interaction, this should be called explicitly when the interaction input is released, this is useful for timed interactions.
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

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
	void CheckInteraction();
	FTransform GetCameraTransform();

	// called when an interactable went on focus
	void InteractableOnFocus(UFreeInteractableComponent* InteractableComponent);
	// called when currently focused interactable lost focus
	void CurrentInteractableLostFocus();

	// binds to interactable's input action and listens for inputs.
	void BindInteractabelInput(const UFreeInteractableComponent* InInteractable);
	// removes interactable's input binding and calls interaction end automatically.
	void UnBindInteractableInput(const UFreeInteractableComponent* InInteractable);
	
private:
	UPROPERTY()
	class UCameraComponent* Camera;
	UPROPERTY()
	UFreeInteractableComponent* FocusedInteractable;
	UPROPERTY()
	UEnhancedInputComponent* InputCompponent;

	int32 StartInteractBindHandle = -1;
	int32 EndInteractBindHandle = -1;


	bool bHoldInteracting = false;
	float HoldInteractingTime = 0.0f;
	float HoldInteractingTimeCounter = 0.0f;
	bool bInteractionSucceeded = false;
	bool bInteractionEnded = false;
	float CheckCounter = 0.0f;

};
