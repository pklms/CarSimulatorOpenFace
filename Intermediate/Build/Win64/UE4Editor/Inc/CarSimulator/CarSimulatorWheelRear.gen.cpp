// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarSimulator/CarSimulatorWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarSimulatorWheelRear() {}
// Cross Module References
	CARSIMULATOR_API UClass* Z_Construct_UClass_UCarSimulatorWheelRear_NoRegister();
	CARSIMULATOR_API UClass* Z_Construct_UClass_UCarSimulatorWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_CarSimulator();
// End Cross Module References
	void UCarSimulatorWheelRear::StaticRegisterNativesUCarSimulatorWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UCarSimulatorWheelRear_NoRegister()
	{
		return UCarSimulatorWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UCarSimulatorWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCarSimulatorWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_CarSimulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCarSimulatorWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CarSimulatorWheelRear.h" },
		{ "ModuleRelativePath", "CarSimulatorWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCarSimulatorWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCarSimulatorWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCarSimulatorWheelRear_Statics::ClassParams = {
		&UCarSimulatorWheelRear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCarSimulatorWheelRear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCarSimulatorWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCarSimulatorWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCarSimulatorWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCarSimulatorWheelRear, 1243426829);
	template<> CARSIMULATOR_API UClass* StaticClass<UCarSimulatorWheelRear>()
	{
		return UCarSimulatorWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCarSimulatorWheelRear(Z_Construct_UClass_UCarSimulatorWheelRear, &UCarSimulatorWheelRear::StaticClass, TEXT("/Script/CarSimulator"), TEXT("UCarSimulatorWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCarSimulatorWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
