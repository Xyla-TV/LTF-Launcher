// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUIAchievement;
struct FAchievementData;
struct FAchievementStates;
#ifdef ACHIEVEMENTSYSTEM_AchievementHUD_generated_h
#error "AchievementHUD.generated.h already included, missing '#pragma once' in AchievementHUD.h"
#endif
#define ACHIEVEMENTSYSTEM_AchievementHUD_generated_h

#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAchievementPackage_Statics; \
	ACHIEVEMENTSYSTEM_API static class UScriptStruct* StaticStruct();


template<> ACHIEVEMENTSYSTEM_API UScriptStruct* StaticStruct<struct FAchievementPackage>();

#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_SPARSE_DATA
#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAchievementDeath); \
	DECLARE_FUNCTION(execScheduleAchievementDisplay);


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAchievementDeath); \
	DECLARE_FUNCTION(execScheduleAchievementDisplay);


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAchievementHUD(); \
	friend struct Z_Construct_UClass_UAchievementHUD_Statics; \
public: \
	DECLARE_CLASS(UAchievementHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AchievementSystem"), NO_API) \
	DECLARE_SERIALIZER(UAchievementHUD)


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUAchievementHUD(); \
	friend struct Z_Construct_UClass_UAchievementHUD_Statics; \
public: \
	DECLARE_CLASS(UAchievementHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AchievementSystem"), NO_API) \
	DECLARE_SERIALIZER(UAchievementHUD)


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAchievementHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAchievementHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAchievementHUD(UAchievementHUD&&); \
	NO_API UAchievementHUD(const UAchievementHUD&); \
public:


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAchievementHUD(UAchievementHUD&&); \
	NO_API UAchievementHUD(const UAchievementHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAchievementHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementHUD)


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Canvas() { return STRUCT_OFFSET(UAchievementHUD, Canvas); } \
	FORCEINLINE static uint32 __PPO__Settings() { return STRUCT_OFFSET(UAchievementHUD, Settings); } \
	FORCEINLINE static uint32 __PPO__Active() { return STRUCT_OFFSET(UAchievementHUD, Active); } \
	FORCEINLINE static uint32 __PPO__BackLog() { return STRUCT_OFFSET(UAchievementHUD, BackLog); } \
	FORCEINLINE static uint32 __PPO__UnlockSound_Loaded() { return STRUCT_OFFSET(UAchievementHUD, UnlockSound_Loaded); } \
	FORCEINLINE static uint32 __PPO__ProgressMadeSound_Loaded() { return STRUCT_OFFSET(UAchievementHUD, ProgressMadeSound_Loaded); }


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_26_PROLOG
#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_SPARSE_DATA \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_RPC_WRAPPERS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_INCLASS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_SPARSE_DATA \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACHIEVEMENTSYSTEM_API UClass* StaticClass<class UAchievementHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
