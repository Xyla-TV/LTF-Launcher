// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACHIEVEMENTSYSTEM_AchievementSystemSettings_generated_h
#error "AchievementSystemSettings.generated.h already included, missing '#pragma once' in AchievementSystemSettings.h"
#endif
#define ACHIEVEMENTSYSTEM_AchievementSystemSettings_generated_h

#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_SPARSE_DATA
#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_RPC_WRAPPERS
#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAchievementSystemSettings(); \
	friend struct Z_Construct_UClass_UAchievementSystemSettings_Statics; \
public: \
	DECLARE_CLASS(UAchievementSystemSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AchievementSystem"), NO_API) \
	DECLARE_SERIALIZER(UAchievementSystemSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUAchievementSystemSettings(); \
	friend struct Z_Construct_UClass_UAchievementSystemSettings_Statics; \
public: \
	DECLARE_CLASS(UAchievementSystemSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AchievementSystem"), NO_API) \
	DECLARE_SERIALIZER(UAchievementSystemSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAchievementSystemSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementSystemSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAchievementSystemSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementSystemSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAchievementSystemSettings(UAchievementSystemSettings&&); \
	NO_API UAchievementSystemSettings(const UAchievementSystemSettings&); \
public:


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAchievementSystemSettings(UAchievementSystemSettings&&); \
	NO_API UAchievementSystemSettings(const UAchievementSystemSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAchievementSystemSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementSystemSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementSystemSettings)


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_42_PROLOG
#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_SPARSE_DATA \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_RPC_WRAPPERS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_INCLASS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_SPARSE_DATA \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACHIEVEMENTSYSTEM_API UClass* StaticClass<class UAchievementSystemSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementSystemSettings_h


#define FOREACH_ENUM_EACHIEVEMENTANIMATION(op) \
	op(EAchievementAnimation::FADE) \
	op(EAchievementAnimation::DISAPPEAR) \
	op(EAchievementAnimation::SLIDE) \
	op(EAchievementAnimation::SCALE_DOWN) 

enum class EAchievementAnimation : uint8;
template<> ACHIEVEMENTSYSTEM_API UEnum* StaticEnum<EAchievementAnimation>();

#define FOREACH_ENUM_EACHIEVEMENTSCEENLOCATION(op) \
	op(EAchievementSceenLocation::TOP_LEFT) \
	op(EAchievementSceenLocation::TOP_RIGHT) \
	op(EAchievementSceenLocation::BOTTOM_LEFT) \
	op(EAchievementSceenLocation::BOTTOM_RIGHT) 

enum class EAchievementSceenLocation : uint8;
template<> ACHIEVEMENTSYSTEM_API UEnum* StaticEnum<EAchievementSceenLocation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
