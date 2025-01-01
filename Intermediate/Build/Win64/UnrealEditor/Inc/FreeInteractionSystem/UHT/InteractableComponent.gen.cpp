// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeInteractionSystem/Components/InteractableComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FREEINTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractableComponent();
	FREEINTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractableComponent_NoRegister();
	FREEINTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
	FREEINTERACTIONSYSTEM_API UEnum* Z_Construct_UEnum_FreeInteractionSystem_EInteractionSystemType();
	FREEINTERACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature();
	FREEINTERACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature();
	FREEINTERACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FreeInteractionSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature_Statics
	{
		struct _Script_FreeInteractionSystem_eventInteractableComponentDelagate_Parms
		{
			UInteractionComponent* Interactor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_FreeInteractionSystem_eventInteractableComponentDelagate_Parms, Interactor), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature_Statics::NewProp_Interactor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/InteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FreeInteractionSystem, nullptr, "InteractableComponentDelagate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature_Statics::_Script_FreeInteractionSystem_eventInteractableComponentDelagate_Parms), Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInteractableComponentDelagate_DelegateWrapper(const FMulticastScriptDelegate& InteractableComponentDelagate, UInteractionComponent* Interactor)
{
	struct _Script_FreeInteractionSystem_eventInteractableComponentDelagate_Parms
	{
		UInteractionComponent* Interactor;
	};
	_Script_FreeInteractionSystem_eventInteractableComponentDelagate_Parms Parms;
	Parms.Interactor=Interactor;
	InteractableComponentDelagate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics
	{
		struct _Script_FreeInteractionSystem_eventInteractUpdateDelegate_Parms
		{
			UInteractionComponent* Interactor;
			float Alpha;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_FreeInteractionSystem_eventInteractUpdateDelegate_Parms, Interactor), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics::NewProp_Interactor_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_FreeInteractionSystem_eventInteractUpdateDelegate_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics::NewProp_Interactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics::NewProp_Alpha,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/InteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FreeInteractionSystem, nullptr, "InteractUpdateDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics::_Script_FreeInteractionSystem_eventInteractUpdateDelegate_Parms), Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInteractUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& InteractUpdateDelegate, UInteractionComponent* Interactor, float Alpha)
{
	struct _Script_FreeInteractionSystem_eventInteractUpdateDelegate_Parms
	{
		UInteractionComponent* Interactor;
		float Alpha;
	};
	_Script_FreeInteractionSystem_eventInteractUpdateDelegate_Parms Parms;
	Parms.Interactor=Interactor;
	Parms.Alpha=Alpha;
	InteractUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics
	{
		struct _Script_FreeInteractionSystem_eventInteractEndedDelegate_Parms
		{
			UInteractionComponent* Interactor;
			bool bSuccess;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_FreeInteractionSystem_eventInteractEndedDelegate_Parms, Interactor), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_FreeInteractionSystem_eventInteractEndedDelegate_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_FreeInteractionSystem_eventInteractEndedDelegate_Parms), &Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::NewProp_Interactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/InteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FreeInteractionSystem, nullptr, "InteractEndedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::_Script_FreeInteractionSystem_eventInteractEndedDelegate_Parms), Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInteractEndedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InteractEndedDelegate, UInteractionComponent* Interactor, bool bSuccess)
{
	struct _Script_FreeInteractionSystem_eventInteractEndedDelegate_Parms
	{
		UInteractionComponent* Interactor;
		bool bSuccess;
	};
	_Script_FreeInteractionSystem_eventInteractEndedDelegate_Parms Parms;
	Parms.Interactor=Interactor;
	Parms.bSuccess=bSuccess ? true : false;
	InteractEndedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UInteractableComponent::execCanInteract)
	{
		P_GET_OBJECT(UInteractionComponent,Z_Param_Interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInteract_Implementation(Z_Param_Interactor);
		P_NATIVE_END;
	}
	struct InteractableComponent_eventCanInteract_Parms
	{
		UInteractionComponent* Interactor;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		InteractableComponent_eventCanInteract_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UInteractableComponent_CanInteract = FName(TEXT("CanInteract"));
	bool UInteractableComponent::CanInteract(UInteractionComponent* Interactor)
	{
		InteractableComponent_eventCanInteract_Parms Parms;
		Parms.Interactor=Interactor;
		ProcessEvent(FindFunctionChecked(NAME_UInteractableComponent_CanInteract),&Parms);
		return !!Parms.ReturnValue;
	}
	void UInteractableComponent::StaticRegisterNativesUInteractableComponent()
	{
		UClass* Class = UInteractableComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInteract", &UInteractableComponent::execCanInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::NewProp_Interactor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractableComponent_eventCanInteract_Parms, Interactor), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::NewProp_Interactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::NewProp_Interactor_MetaData)) };
	void Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractableComponent_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InteractableComponent_eventCanInteract_Parms), &Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::NewProp_Interactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/InteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableComponent, nullptr, "CanInteract", nullptr, nullptr, sizeof(InteractableComponent_eventCanInteract_Parms), Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableComponent_CanInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableComponent_CanInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractableComponent);
	UClass* Z_Construct_UClass_UInteractableComponent_NoRegister()
	{
		return UInteractableComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToInteract_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToInteract;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTickInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionTickInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFocusStartedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFocusStartedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFocusEndedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFocusEndedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractStartedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractStartedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractUpdatedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractUpdatedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractEndedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractEndedDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeInteractionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractableComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractableComponent_CanInteract, "CanInteract" }, // 3281802306
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/InteractableComponent.h" },
		{ "ModuleRelativePath", "Components/InteractableComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "InteractableComponent" },
		{ "ModuleRelativePath", "Components/InteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractableComponent, InteractionDistance), METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionType_MetaData[] = {
		{ "Category", "InteractableComponent" },
		{ "ModuleRelativePath", "Components/InteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractableComponent, InteractionType), Z_Construct_UEnum_FreeInteractionSystem_EInteractionSystemType, METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionType_MetaData)) }; // 433598112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_TimeToInteract_MetaData[] = {
		{ "Category", "InteractableComponent" },
		{ "EditCondition", "InteractionType == EInteractionSystemType::HoldForDuration" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Components/InteractableComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_TimeToInteract = { "TimeToInteract", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractableComponent, TimeToInteract), METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_TimeToInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_TimeToInteract_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionTickInterval_MetaData[] = {
		{ "Category", "InteractableComponent" },
		{ "Comment", "// tick interval when we calculate the time it takes to interact with this item\n" },
		{ "EditCondition", "InteractionType == EInteractionSystemType::HoldForDuration" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Components/InteractableComponent.h" },
		{ "ToolTip", "tick interval when we calculate the time it takes to interact with this item" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionTickInterval = { "InteractionTickInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractableComponent, InteractionTickInterval), METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionTickInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionTickInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnFocusStartedDelegate_MetaData[] = {
		{ "Comment", "// called when this Interactable is on Focus (only called if CanInteract) (called once when the interactable can be interacted bug hasn't been interacted with yet)\n" },
		{ "DisplayName", "On Focus Started" },
		{ "ModuleRelativePath", "Components/InteractableComponent.h" },
		{ "ToolTip", "called when this Interactable is on Focus (only called if CanInteract) (called once when the interactable can be interacted bug hasn't been interacted with yet)" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnFocusStartedDelegate = { "OnFocusStartedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractableComponent, OnFocusStartedDelegate), Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnFocusStartedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnFocusStartedDelegate_MetaData)) }; // 1037211619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnFocusEndedDelegate_MetaData[] = {
		{ "Comment", "// called when this Interactable is no longer on focus\n" },
		{ "DisplayName", "On Focus Ended" },
		{ "ModuleRelativePath", "Components/InteractableComponent.h" },
		{ "ToolTip", "called when this Interactable is no longer on focus" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnFocusEndedDelegate = { "OnFocusEndedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractableComponent, OnFocusEndedDelegate), Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnFocusEndedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnFocusEndedDelegate_MetaData)) }; // 1037211619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteractStartedDelegate_MetaData[] = {
		{ "Comment", "// called when we start Interacting with this Interactable\n" },
		{ "DisplayName", "On Interaction Started" },
		{ "ModuleRelativePath", "Components/InteractableComponent.h" },
		{ "ToolTip", "called when we start Interacting with this Interactable" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteractStartedDelegate = { "OnInteractStartedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractableComponent, OnInteractStartedDelegate), Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractableComponentDelagate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteractStartedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteractStartedDelegate_MetaData)) }; // 1037211619
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteractUpdatedDelegate_MetaData[] = {
		{ "Comment", "/*\n\x09 * called once each 0.05f (@InteractionTickInterval) until we calculate the time it takes to complete the interaction time (@TimeToInteract)\n\x09 * @param Alpha is the alpha starting from 0.0 to 1.0 indicates the alpha of the interaction time. \n\x09 */" },
		{ "DisplayName", "On Interaction Update" },
		{ "ModuleRelativePath", "Components/InteractableComponent.h" },
		{ "ToolTip", "* called once each 0.05f (@InteractionTickInterval) until we calculate the time it takes to complete the interaction time (@TimeToInteract)\n* @param Alpha is the alpha starting from 0.0 to 1.0 indicates the alpha of the interaction time." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteractUpdatedDelegate = { "OnInteractUpdatedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractableComponent, OnInteractUpdatedDelegate), Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteractUpdatedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteractUpdatedDelegate_MetaData)) }; // 1325739176
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteractEndedDelegate_MetaData[] = {
		{ "Comment", "// called when we start Interacting with this Interactable\n" },
		{ "DisplayName", "On Interaction End" },
		{ "ModuleRelativePath", "Components/InteractableComponent.h" },
		{ "ToolTip", "called when we start Interacting with this Interactable" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteractEndedDelegate = { "OnInteractEndedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractableComponent, OnInteractEndedDelegate), Z_Construct_UDelegateFunction_FreeInteractionSystem_InteractEndedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteractEndedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteractEndedDelegate_MetaData)) }; // 991948534
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractableComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_TimeToInteract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_InteractionTickInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnFocusStartedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnFocusEndedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteractStartedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteractUpdatedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableComponent_Statics::NewProp_OnInteractEndedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractableComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableComponent_Statics::ClassParams = {
		&UInteractableComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractableComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractableComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractableComponent()
	{
		if (!Z_Registration_Info_UClass_UInteractableComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableComponent.OuterSingleton, Z_Construct_UClass_UInteractableComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractableComponent.OuterSingleton;
	}
	template<> FREEINTERACTIONSYSTEM_API UClass* StaticClass<UInteractableComponent>()
	{
		return UInteractableComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableComponent);
	UInteractableComponent::~UInteractableComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractableComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractableComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableComponent, UInteractableComponent::StaticClass, TEXT("UInteractableComponent"), &Z_Registration_Info_UClass_UInteractableComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableComponent), 2982577801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractableComponent_h_3798785071(TEXT("/Script/FreeInteractionSystem"),
		Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractableComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractableComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
