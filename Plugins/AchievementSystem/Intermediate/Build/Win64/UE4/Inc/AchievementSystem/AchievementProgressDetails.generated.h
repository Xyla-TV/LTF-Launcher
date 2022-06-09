// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACHIEVEMENTSYSTEM_AchievementProgressDetails_generated_h
#error "AchievementProgressDetails.generated.h already included, missing '#pragma once' in AchievementProgressDetails.h"
#endif
#define ACHIEVEMENTSYSTEM_AchievementProgressDetails_generated_h

#define LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_SPARSE_DATA
#define LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateDetails);


#define LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateDetails);


#define LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAchievementProgressDetails(); \
	friend struct Z_Construct_UClass_UAchievementProgressDetails_Statics; \
public: \
	DECLARE_CLASS(UAchievementProgressDetails, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AchievementSystem"), NO_API) \
	DECLARE_SERIALIZER(UAchievementProgressDetails)


#define LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUAchievementProgressDetails(); \
	friend struct Z_Construct_UClass_UAchievementProgressDetails_Statics; \
public: \
	DECLARE_CLASS(UAchievementProgressDetails, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AchievementSystem"), NO_API) \
	DECLARE_SERIALIZER(UAchievementProgressDetails)


#define LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAchievementProgressDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementProgressDetails) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAchievementProgressDetails); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementProgressDetails); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAchievementProgressDetails(UAchievementProgressDetails&&); \
	NO_API UAchievementProgressDetails(const UAchievementProgressDetails&); \
public:


#define LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAchievementProgressDetails(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAchievementProgressDetails(UAchievementProgressDetails&&); \
	NO_API UAchievementProgressDetails(const UAchievementProgressDetails&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAchievementProgressDetails); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementProgressDetails); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementProgressDetails)


#define LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SubSystem() { return STRUCT_OFFSET(UAchievementProgressDetails, SubSystem); } \
	FORCEINLINE static uint32 __PPO__Settings() { return STRUCT_OFFSET(UAchievementProgressDetails, Settings); }


#define LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_17_PROLOG
#define LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_PRIVATE_PROPERTY_OFFSET \
	LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_SPARSE_DATA \
	LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_RPC_WRAPPERS \
	LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_INCLASS \
	LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_PRIVATE_PROPERTY_OFFSET \
	LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_SPARSE_DATA \
	LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_INCLASS_NO_PURE_DECLS \
	LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACHIEVEMENTSYSTEM_API UClass* StaticClass<class UAchievementProgressDetails>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LTF_Launcher_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressDetails_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
