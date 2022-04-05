// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarSimulator/UserBehavior.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserBehavior() {}
// Cross Module References
	CARSIMULATOR_API UClass* Z_Construct_UClass_UUserBehavior_NoRegister();
	CARSIMULATOR_API UClass* Z_Construct_UClass_UUserBehavior();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CarSimulator();
// End Cross Module References
	void UUserBehavior::StaticRegisterNativesUUserBehavior()
	{
	}
	UClass* Z_Construct_UClass_UUserBehavior_NoRegister()
	{
		return UUserBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UUserBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CarSimulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserBehavior_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UserBehavior.h" },
		{ "ModuleRelativePath", "UserBehavior.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserBehavior>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUserBehavior_Statics::ClassParams = {
		&UUserBehavior::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUserBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserBehavior()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUserBehavior_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUserBehavior, 4118061549);
	template<> CARSIMULATOR_API UClass* StaticClass<UUserBehavior>()
	{
		return UUserBehavior::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUserBehavior(Z_Construct_UClass_UUserBehavior, &UUserBehavior::StaticClass, TEXT("/Script/CarSimulator"), TEXT("UUserBehavior"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserBehavior);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
