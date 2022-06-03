// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACHIEVEMENTSYSTEM_AchievementProgressList_generated_h
#error "AchievementProgressList.generated.h already included, missing '#pragma once' in AchievementProgressList.h"
#endif
#define ACHIEVEMENTSYSTEM_AchievementProgressList_generated_h

#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_SPARSE_DATA
#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateList);


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateList);


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAchievementProgressList(); \
	friend struct Z_Construct_UClass_UAchievementProgressList_Statics; \
public: \
	DECLARE_CLASS(UAchievementProgressList, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AchievementSystem"), NO_API) \
	DECLARE_SERIALIZER(UAchievementProgressList)


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAchievementProgressList(); \
	friend struct Z_Construct_UClass_UAchievementProgressList_Statics; \
public: \
	DECLARE_CLASS(UAchievementProgressList, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AchievementSystem"), NO_API) \
	DECLARE_SERIALIZER(UAchievementProgressList)


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAchievementProgressList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementProgressList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAchievementProgressList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementProgressList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAchievementProgressList(UAchievementProgressList&&); \
	NO_API UAchievementProgressList(const UAchievementProgressList&); \
public:


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAchievementProgressList(UAchievementProgressList&&); \
	NO_API UAchievementProgressList(const UAchievementProgressList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAchievementProgressList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementProgressList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementProgressList)


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ListView() { return STRUCT_OFFSET(UAchievementProgressList, ListView); } \
	FORCEINLINE static uint32 __PPO__HiddenText() { return STRUCT_OFFSET(UAchievementProgressList, HiddenText); } \
	FORCEINLINE static uint32 __PPO__SubSystem() { return STRUCT_OFFSET(UAchievementProgressList, SubSystem); } \
	FORCEINLINE static uint32 __PPO__Settings() { return STRUCT_OFFSET(UAchievementProgressList, Settings); }


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_24_PROLOG
#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_SPARSE_DATA \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_RPC_WRAPPERS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_INCLASS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_SPARSE_DATA \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACHIEVEMENTSYSTEM_API UClass* StaticClass<class UAchievementProgressList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_AchievementSystem_Source_AchievementSystem_Public_AchievementProgressList_h


#define FOREACH_ENUM_EACHIEVEMENTPROGRESSFILTER(op) \
	op(EAchievementProgressFilter::ANY) \
	op(EAchievementProgressFilter::ACHIEVED) \
	op(EAchievementProgressFilter::UNACHIEVED) 

enum class EAchievementProgressFilter : uint8;
template<> ACHIEVEMENTSYSTEM_API UEnum* StaticEnum<EAchievementProgressFilter>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
