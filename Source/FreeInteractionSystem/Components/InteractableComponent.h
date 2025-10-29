// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FreeInteractionSystem/FreeInteractionSystemTypes.h"
#include "GameFramework/Actor.h"
#include "InteractableComponent.generated.h"

class UInteractionComponent;
class UInputAction;

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


	
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category="Interactable")
	FInteractableVisualData ItemVisualData;
	// min distance to interact with this object, 0.0 means no distance limit as long as the interactor can reach this interactable
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category="Interactable")
	float InteractionDistance = 0.0f;
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category="Interactable")
	bool bShowHighlightOnFocus = true;
	UPROPERTY(BlueprintReadWrite,EditAnywhere, Category="Interactable")
	TEnumAsByte<EInteractionSystemType> InteractionType = EInteractionSystemType::SingleClick ;
	UPROPERTY(BlueprintReadWrite,EditAnywhere ,Category="Interactable",meta=(EditCondition = "InteractionType == EInteractionSystemType::HoldForDuration" , EditConditionHides))
	float TimeToInteract = 1.0f;
	
	// if set to false, we will use default interaction input to interact with this interactable actor.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interactable|Input")
	bool bUsesCustomInput = false;
	// input to use to interact with this interactable
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Interactable|Input", meta = (EditCondition = bUsesCustomInput, EditConditionHides))
	TSoftObjectPtr<UInputAction> CustomInputAction = nullptr;

	
	// can we interact with this Interactable, override and return false for cases when we need to avoid interaction
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Interactable")
	bool CanInteract(UInteractionComponent* Interactor  );
	bool CanInteract_Implementation(UInteractionComponent* Interactor);

	// called when this Interactable is on Focus (only called if CanInteract) (called once when the interactable can be interacted but hasn't been interacted with yet)
	UPROPERTY(BlueprintAssignable, Category="Interactable",DisplayName="On Focus Started")
	FInteractableComponentDelagate OnFocusStartedDelegate;
	virtual void OnFocusStarted(UInteractionComponent* Interactor);

	// called when this Interactable is no longer on focus
	UPROPERTY(BlueprintAssignable, Category="Interactable", DisplayName="On Focus Ended")
	FInteractableComponentDelagate OnFocusEndedDelegate;
	virtual void OnFocusEnded(UInteractionComponent* Interactor);

	// called when we start Interacting with this Interactable
	UPROPERTY(BlueprintAssignable, Category="Interactable", DisplayName="On Interaction Started")
	FInteractableComponentDelagate OnInteractStartedDelegate;
	virtual void OnInteractStarted(UInteractionComponent* Interactor);
	
	/*
	 * called once each 0.05f (@InteractionTickInterval) until we calculate the time it takes to complete the interaction time (@TimeToInteract)
	 * @param Alpha is the alpha starting from 0.0 to 1.0 indicates the alpha (%) of the interaction time. 
	 */
	UPROPERTY(BlueprintAssignable, Category="Interactable", DisplayName="On Interaction Update")
	FInteractUpdateDelegate OnInteractUpdatedDelegate;
	virtual void OnInteractUpdate(UInteractionComponent* Interactor,float Alpha);

	// called when we start Interacting with this Interactable
	UPROPERTY(BlueprintAssignable, Category="Interactable", DisplayName="On Interaction End")
	FInteractEndedDelegate OnInteractEndedDelegate;
	virtual void OnInteractEnded(UInteractionComponent* Interactor, bool bSuccess);


protected:

	void SetRenderCustomDepth(const bool InValue);

};
