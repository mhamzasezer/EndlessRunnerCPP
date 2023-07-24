// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SIDERUNNERCPP_SpawnLevel_generated_h
#error "SpawnLevel.generated.h already included, missing '#pragma once' in SpawnLevel.h"
#endif
#define SIDERUNNERCPP_SpawnLevel_generated_h

#define SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_SPARSE_DATA
#define SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execSpawnLevel);


#define SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execSpawnLevel);


#define SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnLevel(); \
	friend struct Z_Construct_UClass_ASpawnLevel_Statics; \
public: \
	DECLARE_CLASS(ASpawnLevel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideRunnerCPP"), NO_API) \
	DECLARE_SERIALIZER(ASpawnLevel)


#define SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASpawnLevel(); \
	friend struct Z_Construct_UClass_ASpawnLevel_Statics; \
public: \
	DECLARE_CLASS(ASpawnLevel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideRunnerCPP"), NO_API) \
	DECLARE_SERIALIZER(ASpawnLevel)


#define SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnLevel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnLevel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnLevel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnLevel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnLevel(ASpawnLevel&&); \
	NO_API ASpawnLevel(const ASpawnLevel&); \
public:


#define SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnLevel(ASpawnLevel&&); \
	NO_API ASpawnLevel(const ASpawnLevel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnLevel); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnLevel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnLevel)


#define SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Level1() { return STRUCT_OFFSET(ASpawnLevel, Level1); } \
	FORCEINLINE static uint32 __PPO__Level2() { return STRUCT_OFFSET(ASpawnLevel, Level2); } \
	FORCEINLINE static uint32 __PPO__Level3() { return STRUCT_OFFSET(ASpawnLevel, Level3); } \
	FORCEINLINE static uint32 __PPO__Level4() { return STRUCT_OFFSET(ASpawnLevel, Level4); } \
	FORCEINLINE static uint32 __PPO__Level5() { return STRUCT_OFFSET(ASpawnLevel, Level5); } \
	FORCEINLINE static uint32 __PPO__Level6() { return STRUCT_OFFSET(ASpawnLevel, Level6); } \
	FORCEINLINE static uint32 __PPO__Level7() { return STRUCT_OFFSET(ASpawnLevel, Level7); } \
	FORCEINLINE static uint32 __PPO__Level8() { return STRUCT_OFFSET(ASpawnLevel, Level8); } \
	FORCEINLINE static uint32 __PPO__Level9() { return STRUCT_OFFSET(ASpawnLevel, Level9); } \
	FORCEINLINE static uint32 __PPO__Level10() { return STRUCT_OFFSET(ASpawnLevel, Level10); }


#define SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_11_PROLOG
#define SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_PRIVATE_PROPERTY_OFFSET \
	SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_SPARSE_DATA \
	SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_RPC_WRAPPERS \
	SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_INCLASS \
	SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_PRIVATE_PROPERTY_OFFSET \
	SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_SPARSE_DATA \
	SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_INCLASS_NO_PURE_DECLS \
	SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIDERUNNERCPP_API UClass* StaticClass<class ASpawnLevel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideRunnerCPP_Source_SideRunnerCPP_SpawnLevel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
