// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeInteractionSystem/Components/InteractionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	FREEINTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractableComponent_NoRegister();
	FREEINTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionComponent();
	FREEINTERACTIONSYSTEM_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
	FREEINTERACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature();
	FREEINTERACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature();
	FREEINTERACTIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FreeInteractionSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature_Statics
	{
		struct _Script_FreeInteractionSystem_eventOnInteractionSigniture_Parms
		{
			UInteractableComponent* Interactable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_FreeInteractionSystem_eventOnInteractionSigniture_Parms, Interactable), Z_Construct_UClass_UInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature_Statics::NewProp_Interactable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature_Statics::NewProp_Interactable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FreeInteractionSystem, nullptr, "OnInteractionSigniture__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature_Statics::_Script_FreeInteractionSystem_eventOnInteractionSigniture_Parms), Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnInteractionSigniture_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionSigniture, UInteractableComponent* Interactable)
{
	struct _Script_FreeInteractionSystem_eventOnInteractionSigniture_Parms
	{
		UInteractableComponent* Interactable;
	};
	_Script_FreeInteractionSystem_eventOnInteractionSigniture_Parms Parms;
	Parms.Interactable=Interactable;
	OnInteractionSigniture.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics
	{
		struct _Script_FreeInteractionSystem_eventOnInteractionUpdateSigniture_Parms
		{
			UInteractableComponent* Interactable;
			float Alpha;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_FreeInteractionSystem_eventOnInteractionUpdateSigniture_Parms, Interactable), Z_Construct_UClass_UInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics::NewProp_Interactable_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_FreeInteractionSystem_eventOnInteractionUpdateSigniture_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics::NewProp_Interactable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics::NewProp_Alpha,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FreeInteractionSystem, nullptr, "OnInteractionUpdateSigniture__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics::_Script_FreeInteractionSystem_eventOnInteractionUpdateSigniture_Parms), Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnInteractionUpdateSigniture_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionUpdateSigniture, UInteractableComponent* Interactable, float Alpha)
{
	struct _Script_FreeInteractionSystem_eventOnInteractionUpdateSigniture_Parms
	{
		UInteractableComponent* Interactable;
		float Alpha;
	};
	_Script_FreeInteractionSystem_eventOnInteractionUpdateSigniture_Parms Parms;
	Parms.Interactable=Interactable;
	Parms.Alpha=Alpha;
	OnInteractionUpdateSigniture.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics
	{
		struct _Script_FreeInteractionSystem_eventOnInteractionFinishSigniture_Parms
		{
			UInteractableComponent* Interactable;
			bool bSuccess;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactable;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::NewProp_Interactable_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::NewProp_Interactable = { "Interactable", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_FreeInteractionSystem_eventOnInteractionFinishSigniture_Parms, Interactable), Z_Construct_UClass_UInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::NewProp_Interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::NewProp_Interactable_MetaData)) };
	void Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_FreeInteractionSystem_eventOnInteractionFinishSigniture_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_FreeInteractionSystem_eventOnInteractionFinishSigniture_Parms), &Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::NewProp_Interactable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FreeInteractionSystem, nullptr, "OnInteractionFinishSigniture__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::_Script_FreeInteractionSystem_eventOnInteractionFinishSigniture_Parms), Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnInteractionFinishSigniture_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionFinishSigniture, UInteractableComponent* Interactable, bool bSuccess)
{
	struct _Script_FreeInteractionSystem_eventOnInteractionFinishSigniture_Parms
	{
		UInteractableComponent* Interactable;
		bool bSuccess;
	};
	_Script_FreeInteractionSystem_eventOnInteractionFinishSigniture_Parms Parms;
	Parms.Interactable=Interactable;
	Parms.bSuccess=bSuccess ? true : false;
	OnInteractionFinishSigniture.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UInteractionComponent::execEndInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndInteraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execStartInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartInteraction();
		P_NATIVE_END;
	}
	void UInteractionComponent::StaticRegisterNativesUInteractionComponent()
	{
		UClass* Class = UInteractionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndInteraction", &UInteractionComponent::execEndInteraction },
			{ "StartInteraction", &UInteractionComponent::execStartInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionComponent_EndInteraction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_EndInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_EndInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "EndInteraction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_EndInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_EndInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_EndInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionComponent_EndInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_StartInteraction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_StartInteraction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_StartInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "StartInteraction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_StartInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_StartInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_StartInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionComponent_StartInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractionComponent);
	UClass* Z_Construct_UClass_UInteractionComponent_NoRegister()
	{
		return UInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckForInteractionInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckForInteractionInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugMessages_MetaData[];
#endif
		static void NewProp_bDebugMessages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugMessages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFocusStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFocusStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFocusLost_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFocusLost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusedInteractable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusedInteractable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FreeInteractionSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionComponent_EndInteraction, "EndInteraction" }, // 949445496
		{ &Z_Construct_UFunction_UInteractionComponent_StartInteraction, "StartInteraction" }, // 2772299406
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/InteractionComponent.h" },
		{ "ModuleRelativePath", "Components/InteractionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_CheckForInteractionInterval_MetaData[] = {
		{ "Category", "InteractionComponent" },
		{ "ModuleRelativePath", "Components/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_CheckForInteractionInterval = { "CheckForInteractionInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractionComponent, CheckForInteractionInterval), METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_CheckForInteractionInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_CheckForInteractionInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "InteractionComponent" },
		{ "ModuleRelativePath", "Components/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractionComponent, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_TraceChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bDebugMessages_MetaData[] = {
		{ "Category", "InteractionComponent" },
		{ "ModuleRelativePath", "Components/InteractionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bDebugMessages_SetBit(void* Obj)
	{
		((UInteractionComponent*)Obj)->bDebugMessages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bDebugMessages = { "bDebugMessages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInteractionComponent), &Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bDebugMessages_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bDebugMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bDebugMessages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnFocusStarted_MetaData[] = {
		{ "ModuleRelativePath", "Components/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnFocusStarted = { "OnFocusStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractionComponent, OnFocusStarted), Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnFocusStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnFocusStarted_MetaData)) }; // 1146896469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnFocusLost_MetaData[] = {
		{ "ModuleRelativePath", "Components/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnFocusLost = { "OnFocusLost", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractionComponent, OnFocusLost), Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnFocusLost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnFocusLost_MetaData)) }; // 1146896469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractStarted_MetaData[] = {
		{ "ModuleRelativePath", "Components/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractStarted = { "OnInteractStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractionComponent, OnInteractStarted), Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionSigniture__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractStarted_MetaData)) }; // 1146896469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Components/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractUpdate = { "OnInteractUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractionComponent, OnInteractUpdate), Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionUpdateSigniture__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractUpdate_MetaData)) }; // 2895895795
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractFinished_MetaData[] = {
		{ "ModuleRelativePath", "Components/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractFinished = { "OnInteractFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractionComponent, OnInteractFinished), Z_Construct_UDelegateFunction_FreeInteractionSystem_OnInteractionFinishSigniture__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractFinished_MetaData)) }; // 411473590
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_Camera_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractionComponent, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_FocusedInteractable_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/InteractionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_FocusedInteractable = { "FocusedInteractable", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractionComponent, FocusedInteractable), Z_Construct_UClass_UInteractableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_FocusedInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_FocusedInteractable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_CheckForInteractionInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bDebugMessages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnFocusStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnFocusLost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_FocusedInteractable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionComponent_Statics::ClassParams = {
		&UInteractionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionComponent()
	{
		if (!Z_Registration_Info_UClass_UInteractionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionComponent.OuterSingleton, Z_Construct_UClass_UInteractionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractionComponent.OuterSingleton;
	}
	template<> FREEINTERACTIONSYSTEM_API UClass* StaticClass<UInteractionComponent>()
	{
		return UInteractionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionComponent);
	UInteractionComponent::~UInteractionComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionComponent, UInteractionComponent::StaticClass, TEXT("UInteractionComponent"), &Z_Registration_Info_UClass_UInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionComponent), 1477522243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_361849859(TEXT("/Script/FreeInteractionSystem"),
		Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
