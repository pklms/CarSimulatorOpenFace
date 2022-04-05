// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CARSIMULATOR_CarSimulatorPawn_generated_h
#error "CarSimulatorPawn.generated.h already included, missing '#pragma once' in CarSimulatorPawn.h"
#endif
#define CARSIMULATOR_CarSimulatorPawn_generated_h

#define CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_SPARSE_DATA
#define CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_RPC_WRAPPERS
#define CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarSimulatorPawn(); \
	friend struct Z_Construct_UClass_ACarSimulatorPawn_Statics; \
public: \
	DECLARE_CLASS(ACarSimulatorPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarSimulator"), NO_API) \
	DECLARE_SERIALIZER(ACarSimulatorPawn)


#define CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_INCLASS \
private: \
	static void StaticRegisterNativesACarSimulatorPawn(); \
	friend struct Z_Construct_UClass_ACarSimulatorPawn_Statics; \
public: \
	DECLARE_CLASS(ACarSimulatorPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CarSimulator"), NO_API) \
	DECLARE_SERIALIZER(ACarSimulatorPawn)


#define CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACarSimulatorPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarSimulatorPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarSimulatorPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarSimulatorPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarSimulatorPawn(ACarSimulatorPawn&&); \
	NO_API ACarSimulatorPawn(const ACarSimulatorPawn&); \
public:


#define CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarSimulatorPawn(ACarSimulatorPawn&&); \
	NO_API ACarSimulatorPawn(const ACarSimulatorPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarSimulatorPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarSimulatorPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACarSimulatorPawn)


#define CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ACarSimulatorPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ACarSimulatorPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase() { return STRUCT_OFFSET(ACarSimulatorPawn, InternalCameraBase); } \
	FORCEINLINE static uint32 __PPO__InternalCamera() { return STRUCT_OFFSET(ACarSimulatorPawn, InternalCamera); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(ACarSimulatorPawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(ACarSimulatorPawn, InCarGear); }


#define CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_16_PROLOG
#define CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_SPARSE_DATA \
	CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_RPC_WRAPPERS \
	CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_INCLASS \
	CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_PRIVATE_PROPERTY_OFFSET \
	CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_SPARSE_DATA \
	CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_INCLASS_NO_PURE_DECLS \
	CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CARSIMULATOR_API UClass* StaticClass<class ACarSimulatorPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CarSimulator_OpenFace_Source_CarSimulator_CarSimulatorPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
