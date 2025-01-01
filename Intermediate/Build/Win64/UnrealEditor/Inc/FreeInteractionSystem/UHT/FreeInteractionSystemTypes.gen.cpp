// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FreeInteractionSystem/FreeInteractionSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFreeInteractionSystemTypes() {}
// Cross Module References
	FREEINTERACTIONSYSTEM_API UEnum* Z_Construct_UEnum_FreeInteractionSystem_EInteractionSystemType();
	UPackage* Z_Construct_UPackage__Script_FreeInteractionSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInteractionSystemType;
	static UEnum* EInteractionSystemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInteractionSystemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInteractionSystemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FreeInteractionSystem_EInteractionSystemType, (UObject*)Z_Construct_UPackage__Script_FreeInteractionSystem(), TEXT("EInteractionSystemType"));
		}
		return Z_Registration_Info_UEnum_EInteractionSystemType.OuterSingleton;
	}
	template<> FREEINTERACTIONSYSTEM_API UEnum* StaticEnum<EInteractionSystemType>()
	{
		return EInteractionSystemType_StaticEnum();
	}
	struct Z_Construct_UEnum_FreeInteractionSystem_EInteractionSystemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FreeInteractionSystem_EInteractionSystemType_Statics::Enumerators[] = {
		{ "SingleClick", (int64)SingleClick },
		{ "HoldForDuration", (int64)HoldForDuration },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FreeInteractionSystem_EInteractionSystemType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HoldForDuration.DisplayName", "Hold for Duration" },
		{ "HoldForDuration.Name", "HoldForDuration" },
		{ "ModuleRelativePath", "FreeInteractionSystemTypes.h" },
		{ "SingleClick.DisplayName", "Single Click" },
		{ "SingleClick.Name", "SingleClick" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FreeInteractionSystem_EInteractionSystemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FreeInteractionSystem,
		nullptr,
		"EInteractionSystemType",
		"EInteractionSystemType",
		Z_Construct_UEnum_FreeInteractionSystem_EInteractionSystemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FreeInteractionSystem_EInteractionSystemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_FreeInteractionSystem_EInteractionSystemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FreeInteractionSystem_EInteractionSystemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FreeInteractionSystem_EInteractionSystemType()
	{
		if (!Z_Registration_Info_UEnum_EInteractionSystemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInteractionSystemType.InnerSingleton, Z_Construct_UEnum_FreeInteractionSystem_EInteractionSystemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInteractionSystemType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_FreeInteractionSystemTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_FreeInteractionSystemTypes_h_Statics::EnumInfo[] = {
		{ EInteractionSystemType_StaticEnum, TEXT("EInteractionSystemType"), &Z_Registration_Info_UEnum_EInteractionSystemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 433598112U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_FreeInteractionSystemTypes_h_2285179212(TEXT("/Script/FreeInteractionSystem"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_FreeInteractionSystemTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_Documents_Unreal_Projects_TestCpp_Plugins_FreeInteractionSystem_Source_FreeInteractionSystem_FreeInteractionSystemTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
