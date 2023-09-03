// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NatureSurvivors/NatureSurvivorsGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNatureSurvivorsGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	NATURESURVIVORS_API UClass* Z_Construct_UClass_ANatureSurvivorsGameModeBase();
	NATURESURVIVORS_API UClass* Z_Construct_UClass_ANatureSurvivorsGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NatureSurvivors();
// End Cross Module References
	void ANatureSurvivorsGameModeBase::StaticRegisterNativesANatureSurvivorsGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANatureSurvivorsGameModeBase);
	UClass* Z_Construct_UClass_ANatureSurvivorsGameModeBase_NoRegister()
	{
		return ANatureSurvivorsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ANatureSurvivorsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANatureSurvivorsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NatureSurvivors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANatureSurvivorsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NatureSurvivorsGameModeBase.h" },
		{ "ModuleRelativePath", "NatureSurvivorsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANatureSurvivorsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANatureSurvivorsGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANatureSurvivorsGameModeBase_Statics::ClassParams = {
		&ANatureSurvivorsGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANatureSurvivorsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANatureSurvivorsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANatureSurvivorsGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ANatureSurvivorsGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANatureSurvivorsGameModeBase.OuterSingleton, Z_Construct_UClass_ANatureSurvivorsGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANatureSurvivorsGameModeBase.OuterSingleton;
	}
	template<> NATURESURVIVORS_API UClass* StaticClass<ANatureSurvivorsGameModeBase>()
	{
		return ANatureSurvivorsGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANatureSurvivorsGameModeBase);
	ANatureSurvivorsGameModeBase::~ANatureSurvivorsGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_ydcar_Desktop_GRAPHIC_ART_NatureSurvivors_NatureSurvivors_Source_NatureSurvivors_NatureSurvivorsGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ydcar_Desktop_GRAPHIC_ART_NatureSurvivors_NatureSurvivors_Source_NatureSurvivors_NatureSurvivorsGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANatureSurvivorsGameModeBase, ANatureSurvivorsGameModeBase::StaticClass, TEXT("ANatureSurvivorsGameModeBase"), &Z_Registration_Info_UClass_ANatureSurvivorsGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANatureSurvivorsGameModeBase), 1413545702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ydcar_Desktop_GRAPHIC_ART_NatureSurvivors_NatureSurvivors_Source_NatureSurvivors_NatureSurvivorsGameModeBase_h_2589329955(TEXT("/Script/NatureSurvivors"),
		Z_CompiledInDeferFile_FID_Users_ydcar_Desktop_GRAPHIC_ART_NatureSurvivors_NatureSurvivors_Source_NatureSurvivors_NatureSurvivorsGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ydcar_Desktop_GRAPHIC_ART_NatureSurvivors_NatureSurvivors_Source_NatureSurvivors_NatureSurvivorsGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
