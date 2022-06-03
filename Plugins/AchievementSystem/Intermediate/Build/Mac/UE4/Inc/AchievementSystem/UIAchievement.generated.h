// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUIAchievement;
class UWidgetAnimation;
struct FAchievementData;
struct FAchievementStates;
class UAchievementSystemSettings;
#ifdef ACHIEVEMENTSYSTEM_UIAchievement_generated_h
#error "UIAchievement.generated.h already included, missing '#pragma once' in UIAchievement.h"
#endif
#define ACHIEVEMENTSYSTEM_UIAchievement_generated_h

#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_17_DELEGATE \
struct _Script_AchievementSystem_eventDeathEvent_Parms \
{ \
	UUIAchievement* Achievement; \
}; \
static inline void FDeathEvent_DelegateWrapper(const FMulticastScriptDelegate& DeathEvent, UUIAchievement* Achievement) \
{ \
	_Script_AchievementSystem_eventDeathEvent_Parms Parms; \
	Parms.Achievement=Achievement; \
	DeathEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_SPARSE_DATA
#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDeathAnimationComplete); \
	DECLARE_FUNCTION(execOnDeathEvent); \
	DECLARE_FUNCTION(execSetValue);


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDeathAnimationComplete); \
	DECLARE_FUNCTION(execOnDeathEvent); \
	DECLARE_FUNCTION(execSetValue);


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIAchievement(); \
	friend struct Z_Construct_UClass_UUIAchievement_Statics; \
public: \
	DECLARE_CLASS(UUIAchievement, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AchievementSystem"), NO_API) \
	DECLARE_SERIALIZER(UUIAchievement)


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUUIAchievement(); \
	friend struct Z_Construct_UClass_UUIAchievement_Statics; \
public: \
	DECLARE_CLASS(UUIAchievement, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AchievementSystem"), NO_API) \
	DECLARE_SERIALIZER(UUIAchievement)


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIAchievement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIAchievement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIAchievement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIAchievement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIAchievement(UUIAchievement&&); \
	NO_API UUIAchievement(const UUIAchievement&); \
public:


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUIAchievement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUIAchievement(UUIAchievement&&); \
	NO_API UUIAchievement(const UUIAchievement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUIAchievement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIAchievement); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIAchievement)


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Title() { return STRUCT_OFFSET(UUIAchievement, Title); } \
	FORCEINLINE static uint32 __PPO__Description() { return STRUCT_OFFSET(UUIAchievement, Description); } \
	FORCEINLINE static uint32 __PPO__PercentText() { return STRUCT_OFFSET(UUIAchievement, PercentText); } \
	FORCEINLINE static uint32 __PPO__Icon() { return STRUCT_OFFSET(UUIAchievement, Icon); } \
	FORCEINLINE static uint32 __PPO__OverlayIcon() { return STRUCT_OFFSET(UUIAchievement, OverlayIcon); } \
	FORCEINLINE static uint32 __PPO__ProgressBar() { return STRUCT_OFFSET(UUIAchievement, ProgressBar); } \
	FORCEINLINE static uint32 __PPO__SlideLeft() { return STRUCT_OFFSET(UUIAchievement, SlideLeft); } \
	FORCEINLINE static uint32 __PPO__SlideRight() { return STRUCT_OFFSET(UUIAchievement, SlideRight); } \
	FORCEINLINE static uint32 __PPO__ScaleDown() { return STRUCT_OFFSET(UUIAchievement, ScaleDown); } \
	FORCEINLINE static uint32 __PPO__Fade() { return STRUCT_OFFSET(UUIAchievement, Fade); }


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_22_PROLOG
#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_SPARSE_DATA \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_RPC_WRAPPERS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_INCLASS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_SPARSE_DATA \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACHIEVEMENTSYSTEM_API UClass* StaticClass<class UUIAchievement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_UIAchievement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
