// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CarSimulator/CarSimulatorWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarSimulatorWheelFront() {}
// Cross Module References
	CARSIMULATOR_API UClass* Z_Construct_UClass_UCarSimulatorWheelFront_NoRegister();
	CARSIMULATOR_API UClass* Z_Construct_UClass_UCarSimulatorWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_CarSimulator();
// End Cross Module References
	void UCarSimulatorWheelFront::StaticRegisterNativesUCarSimulatorWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UCarSimulatorWheelFront_NoRegister()
	{
		return UCarSimulatorWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UCarSimulatorWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCarSimulatorWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_CarSimulator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCarSimulatorWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CarSimulatorWheelFront.h" },
		{ "ModuleRelativePath", "CarSimulatorWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCarSimulatorWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCarSimulatorWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCarSimulatorWheelFront_Statics::ClassParams = {
		&UCarSimulatorWheelFront::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCarSimulatorWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCarSimulatorWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCarSimulatorWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCarSimulatorWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCarSimulatorWheelFront, 3916447013);
	template<> CARSIMULATOR_API UClass* StaticClass<UCarSimulatorWheelFront>()
	{
		return UCarSimulatorWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCarSimulatorWheelFront(Z_Construct_UClass_UCarSimulatorWheelFront, &UCarSimulatorWheelFront::StaticClass, TEXT("/Script/CarSimulator"), TEXT("UCarSimulatorWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCarSimulatorWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
