// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/InteractionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInteractableComponent;
#ifdef FREEINTERACTIONSYSTEM_InteractionComponent_generated_h
#error "InteractionComponent.generated.h already included, missing '#pragma once' in InteractionComponent.h"
#endif
#define FREEINTERACTIONSYSTEM_InteractionComponent_generated_h

#define FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_10_DELEGATE \
FREEINTERACTIONSYSTEM_API void FOnInteractionSigniture_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionSigniture, UInteractableComponent* Interactable);


#define FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_11_DELEGATE \
FREEINTERACTIONSYSTEM_API void FOnInteractionUpdateSigniture_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionUpdateSigniture, UInteractableComponent* Interactable, float Alpha);


#define FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_12_DELEGATE \
FREEINTERACTIONSYSTEM_API void FOnInteractionFinishSigniture_DelegateWrapper(const FMulticastScriptDelegate& OnInteractionFinishSigniture, UInteractableComponent* Interactable, bool bSuccess);


#define FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_SPARSE_DATA
#define FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndInteraction); \
	DECLARE_FUNCTION(execStartInteraction);


#define FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndInteraction); \
	DECLARE_FUNCTION(execStartInteraction);


#define FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_ACCESSORS
#define FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FreeInteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FreeInteractionSystem"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public: \
	NO_API virtual ~UInteractionComponent();


#define FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionComponent) \
	NO_API virtual ~UInteractionComponent();


#define FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_17_PROLOG
#define FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_SPARSE_DATA \
	FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_RPC_WRAPPERS \
	FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_ACCESSORS \
	FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_INCLASS \
	FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_SPARSE_DATA \
	FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_ACCESSORS \
	FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FREEINTERACTIONSYSTEM_API UClass* StaticClass<class UInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_Components_InteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
