// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarSimulator/CarSimulatorGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarSimulatorGameMode() {}
// Cross Module References
	CARSIMULATOR_API UClass* Z_Construct_UClass_ACarSimulatorGameMode_NoRegister();
	CARSIMULATOR_API UClass* Z_Construct_UClass_ACarSimulatorGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CarSimulator();
// End Cross Module References
	void ACarSimulatorGameMode::StaticRegisterNativesACarSimulatorGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACarSimulatorGameMode_NoRegister()
	{
		return ACarSimulatorGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACarSimulatorGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACarSimulatorGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CarSimulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarSimulatorGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CarSimulatorGameMode.h" },
		{ "ModuleRelativePath", "CarSimulatorGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACarSimulatorGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarSimulatorGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACarSimulatorGameMode_Statics::ClassParams = {
		&ACarSimulatorGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACarSimulatorGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACarSimulatorGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACarSimulatorGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACarSimulatorGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACarSimulatorGameMode, 694282744);
	template<> CARSIMULATOR_API UClass* StaticClass<ACarSimulatorGameMode>()
	{
		return ACarSimulatorGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACarSimulatorGameMode(Z_Construct_UClass_ACarSimulatorGameMode, &ACarSimulatorGameMode::StaticClass, TEXT("/Script/CarSimulator"), TEXT("ACarSimulatorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarSimulatorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
