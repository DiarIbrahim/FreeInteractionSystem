// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FreeInteractionSystem/FreeInteractionSystemTypes.h"
#include "GameFramework/Actor.h"
#include "InteractableComponent.generated.h"

class UInteractionComponent;


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractableComponentDelagate , UInteractionComponent*, Interactor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractUpdateDelegate , UInteractionComponent*, Interactor , float , Alpha);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInteractEndedDelegate , UInteractionComponent*, Interactor , bool , bSuccess);


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class FREEINTERACTIONSYSTEM_API UInteractableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInteractableComponent();


	
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	float InteractionDistance = 120.0f;
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TEnumAsByte<EInteractionSystemType> InteractionType = EInteractionSystemType::SingleClick ;
	UPROPERTY(BlueprintReadWrite,EditAnywhere , meta=(EditCondition = "InteractionType == EInteractionSystemType::HoldForDuration" , EditConditionHides))
	float TimeToInteract = 1.0f;
	// tick interval when we calculate the time it takes to interact with this item
	UPROPERTY(BlueprintReadWrite,EditAnywhere , meta=(EditCondition = "InteractionType == EInteractionSystemType::HoldForDuration" , EditConditionHides))
	float InteractionTickInterval = 0.05f;
	

	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool CanInteract(UInteractionComponent* Interactor  );
	bool CanInteract_Implementation(UInteractionComponent* Interactor);

	// called when this Interactable is on Focus (only called if CanInteract) (called once when the interactable can be interacted bug hasn't been interacted with yet)
	UPROPERTY(BlueprintAssignable,DisplayName="On Focus Started")
	FInteractableComponentDelagate OnFocusStartedDelegate;
	void OnFocusStarted(UInteractionComponent* Interactor);

	// called when this Interactable is no longer on focus
	UPROPERTY(BlueprintAssignable ,DisplayName="On Focus Ended")
	FInteractableComponentDelagate OnFocusEndedDelegate;
	void OnFocusEnded(UInteractionComponent* Interactor);

	// called when we start Interacting with this Interactable
	UPROPERTY(BlueprintAssignable ,DisplayName="On Interaction Started")
	FInteractableComponentDelagate OnInteractStartedDelegate;
	void OnInteractStarted(UInteractionComponent* Interactor);
	
	/*
	 * called once each 0.05f (@InteractionTickInterval) until we calculate the time it takes to complete the interaction time (@TimeToInteract)
	 * @param Alpha is the alpha starting from 0.0 to 1.0 indicates the alpha of the interaction time. 
	 */
	UPROPERTY(BlueprintAssignable,DisplayName="On Interaction Update")
	FInteractUpdateDelegate OnInteractUpdatedDelegate;
	void OnInteractUpdate(UInteractionComponent* Interactor,float Alpha);

	// called when we start Interacting with this Interactable
	UPROPERTY(BlueprintAssignable,DisplayName="On Interaction End")
	FInteractEndedDelegate OnInteractEndedDelegate;
	void OnInteractEnded(UInteractionComponent* Interactor, bool bSuccess);


protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,FActorComponentTickFunction* ThisTickFunction) override;

private:

};
