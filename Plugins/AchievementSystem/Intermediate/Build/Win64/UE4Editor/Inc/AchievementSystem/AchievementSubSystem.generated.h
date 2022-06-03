// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAchievementData;
struct FAchievementStates;
#ifdef ACHIEVEMENTSYSTEM_AchievementSubSystem_generated_h
#error "AchievementSubSystem.generated.h already included, missing '#pragma once' in AchievementSubSystem.h"
#endif
#define ACHIEVEMENTSYSTEM_AchievementSubSystem_generated_h

#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_16_DELEGATE \
struct _Script_AchievementSystem_eventOnAchievementProgressUpdate_Parms \
{ \
	FName AchievementName; \
	float NewProgress; \
	float Change; \
}; \
static inline void FOnAchievementProgressUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnAchievementProgressUpdate, FName AchievementName, float NewProgress, float Change) \
{ \
	_Script_AchievementSystem_eventOnAchievementProgressUpdate_Parms Parms; \
	Parms.AchievementName=AchievementName; \
	Parms.NewProgress=NewProgress; \
	Parms.Change=Change; \
	OnAchievementProgressUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_15_DELEGATE \
struct _Script_AchievementSystem_eventOnAchievementUnlock_Parms \
{ \
	FName AchievementName; \
}; \
static inline void FOnAchievementUnlock_DelegateWrapper(const FMulticastScriptDelegate& OnAchievementUnlock, FName AchievementName) \
{ \
	_Script_AchievementSystem_eventOnAchievementUnlock_Parms Parms; \
	Parms.AchievementName=AchievementName; \
	OnAchievementUnlock.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_SPARSE_DATA
#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetAchievementStates); \
	DECLARE_FUNCTION(execSaveAchievementState); \
	DECLARE_FUNCTION(execAddAchievementProgress); \
	DECLARE_FUNCTION(execSetAchievementProgress); \
	DECLARE_FUNCTION(execUnlock); \
	DECLARE_FUNCTION(execGetAchievementState); \
	DECLARE_FUNCTION(execGetAchievedPercentage); \
	DECLARE_FUNCTION(execGetAchievedCount); \
	DECLARE_FUNCTION(execAchievementExists);


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetAchievementStates); \
	DECLARE_FUNCTION(execSaveAchievementState); \
	DECLARE_FUNCTION(execAddAchievementProgress); \
	DECLARE_FUNCTION(execSetAchievementProgress); \
	DECLARE_FUNCTION(execUnlock); \
	DECLARE_FUNCTION(execGetAchievementState); \
	DECLARE_FUNCTION(execGetAchievedPercentage); \
	DECLARE_FUNCTION(execGetAchievedCount); \
	DECLARE_FUNCTION(execAchievementExists);


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAchievementSubSystem(); \
	friend struct Z_Construct_UClass_UAchievementSubSystem_Statics; \
public: \
	DECLARE_CLASS(UAchievementSubSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AchievementSystem"), NO_API) \
	DECLARE_SERIALIZER(UAchievementSubSystem)


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUAchievementSubSystem(); \
	friend struct Z_Construct_UClass_UAchievementSubSystem_Statics; \
public: \
	DECLARE_CLASS(UAchievementSubSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AchievementSystem"), NO_API) \
	DECLARE_SERIALIZER(UAchievementSubSystem)


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAchievementSubSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementSubSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAchievementSubSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementSubSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAchievementSubSystem(UAchievementSubSystem&&); \
	NO_API UAchievementSubSystem(const UAchievementSubSystem&); \
public:


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAchievementSubSystem(UAchievementSubSystem&&); \
	NO_API UAchievementSubSystem(const UAchievementSubSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAchievementSubSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementSubSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAchievementSubSystem)


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Settings() { return STRUCT_OFFSET(UAchievementSubSystem, Settings); } \
	FORCEINLINE static uint32 __PPO__Screen() { return STRUCT_OFFSET(UAchievementSubSystem, Screen); }


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_21_PROLOG
#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_SPARSE_DATA \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_RPC_WRAPPERS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_INCLASS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_SPARSE_DATA \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACHIEVEMENTSYSTEM_API UClass* StaticClass<class UAchievementSubSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSubSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
