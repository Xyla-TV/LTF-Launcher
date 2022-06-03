// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AchievementSystem/Public/AchievementSystemSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementSystemSettings() {}
// Cross Module References
	ACHIEVEMENTSYSTEM_API UEnum* Z_Construct_UEnum_AchievementSystem_EAchievementAnimation();
	UPackage* Z_Construct_UPackage__Script_AchievementSystem();
	ACHIEVEMENTSYSTEM_API UEnum* Z_Construct_UEnum_AchievementSystem_EAchievementSceenLocation();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementSystemSettings_NoRegister();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementSystemSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ACHIEVEMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UUIAchievement_NoRegister();
// End Cross Module References
	static UEnum* EAchievementAnimation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AchievementSystem_EAchievementAnimation, Z_Construct_UPackage__Script_AchievementSystem(), TEXT("EAchievementAnimation"));
		}
		return Singleton;
	}
	template<> ACHIEVEMENTSYSTEM_API UEnum* StaticEnum<EAchievementAnimation>()
	{
		return EAchievementAnimation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAchievementAnimation(EAchievementAnimation_StaticEnum, TEXT("/Script/AchievementSystem"), TEXT("EAchievementAnimation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AchievementSystem_EAchievementAnimation_Hash() { return 904100015U; }
	UEnum* Z_Construct_UEnum_AchievementSystem_EAchievementAnimation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AchievementSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAchievementAnimation"), 0, Get_Z_Construct_UEnum_AchievementSystem_EAchievementAnimation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAchievementAnimation::FADE", (int64)EAchievementAnimation::FADE },
				{ "EAchievementAnimation::DISAPPEAR", (int64)EAchievementAnimation::DISAPPEAR },
				{ "EAchievementAnimation::SLIDE", (int64)EAchievementAnimation::SLIDE },
				{ "EAchievementAnimation::SCALE_DOWN", (int64)EAchievementAnimation::SCALE_DOWN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DISAPPEAR.DisplayName", "Disappear" },
				{ "DISAPPEAR.Name", "EAchievementAnimation::DISAPPEAR" },
				{ "FADE.DisplayName", "Fade" },
				{ "FADE.Name", "EAchievementAnimation::FADE" },
				{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
				{ "SCALE_DOWN.DisplayName", "Scale Down" },
				{ "SCALE_DOWN.Name", "EAchievementAnimation::SCALE_DOWN" },
				{ "SLIDE.DisplayName", "Slide" },
				{ "SLIDE.Name", "EAchievementAnimation::SLIDE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AchievementSystem,
				nullptr,
				"EAchievementAnimation",
				"EAchievementAnimation",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAchievementSceenLocation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AchievementSystem_EAchievementSceenLocation, Z_Construct_UPackage__Script_AchievementSystem(), TEXT("EAchievementSceenLocation"));
		}
		return Singleton;
	}
	template<> ACHIEVEMENTSYSTEM_API UEnum* StaticEnum<EAchievementSceenLocation>()
	{
		return EAchievementSceenLocation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAchievementSceenLocation(EAchievementSceenLocation_StaticEnum, TEXT("/Script/AchievementSystem"), TEXT("EAchievementSceenLocation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AchievementSystem_EAchievementSceenLocation_Hash() { return 1072329485U; }
	UEnum* Z_Construct_UEnum_AchievementSystem_EAchievementSceenLocation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AchievementSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAchievementSceenLocation"), 0, Get_Z_Construct_UEnum_AchievementSystem_EAchievementSceenLocation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAchievementSceenLocation::TOP_LEFT", (int64)EAchievementSceenLocation::TOP_LEFT },
				{ "EAchievementSceenLocation::TOP_RIGHT", (int64)EAchievementSceenLocation::TOP_RIGHT },
				{ "EAchievementSceenLocation::BOTTOM_LEFT", (int64)EAchievementSceenLocation::BOTTOM_LEFT },
				{ "EAchievementSceenLocation::BOTTOM_RIGHT", (int64)EAchievementSceenLocation::BOTTOM_RIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BOTTOM_LEFT.DisplayName", "Bottom Left" },
				{ "BOTTOM_LEFT.Name", "EAchievementSceenLocation::BOTTOM_LEFT" },
				{ "BOTTOM_RIGHT.DisplayName", "Bottom Right" },
				{ "BOTTOM_RIGHT.Name", "EAchievementSceenLocation::BOTTOM_RIGHT" },
				{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
				{ "TOP_LEFT.DisplayName", "Top Left" },
				{ "TOP_LEFT.Name", "EAchievementSceenLocation::TOP_LEFT" },
				{ "TOP_RIGHT.DisplayName", "Top Right" },
				{ "TOP_RIGHT.Name", "EAchievementSceenLocation::TOP_RIGHT" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AchievementSystem,
				nullptr,
				"EAchievementSceenLocation",
				"EAchievementSceenLocation",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UAchievementSystemSettings::StaticRegisterNativesUAchievementSystemSettings()
	{
	}
	UClass* Z_Construct_UClass_UAchievementSystemSettings_NoRegister()
	{
		return UAchievementSystemSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAchievementSystemSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Achievements_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Achievements_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Achievements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCompletionistAchievement_MetaData[];
#endif
		static void NewProp_bUseCompletionistAchievement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCompletionistAchievement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletionistAchievementKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CompletionistAchievementKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowAchievementUnlocks_MetaData[];
#endif
		static void NewProp_bShowAchievementUnlocks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowAchievementUnlocks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowAchievementProgress_MetaData[];
#endif
		static void NewProp_bShowAchievementProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowAchievementProgress;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScreenLocation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScreenLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalOnScreen_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalOnScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowExactProgress_MetaData[];
#endif
		static void NewProp_bShowExactProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowExactProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDecimalPlaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxDecimalPlaces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSave_MetaData[];
#endif
		static void NewProp_bAutoSave_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExitAnimation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExitAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitAnimationLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExitAnimationLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntranceAnimationLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EntranceAnimationLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnlockSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressMadeSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressMadeSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UiAchievementOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UiAchievementOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievedWord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AchievedWord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnAchievedWord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnAchievedWord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAchievementSystemSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AchievementSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::Class_MetaDataParams[] = {
		{ "Category", "Holds all settings for the achievement system" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AchievementSystemSettings.h" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_Achievements_Inner = { "Achievements", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAchievementData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_Achievements_MetaData[] = {
		{ "Category", "Achievements" },
		{ "Comment", "/**List of all achievement which can be unlocked by the player */" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "TitleProperty", "Key" },
		{ "ToolTip", "List of all achievement which can be unlocked by the player" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_Achievements = { "Achievements", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSystemSettings, Achievements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_Achievements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_Achievements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bUseCompletionistAchievement_MetaData[] = {
		{ "Category", "Achievements" },
		{ "Comment", "/**If true, CompletionistAchievementKey will be unlocked when all other achievement have be gained*/" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "If true, CompletionistAchievementKey will be unlocked when all other achievement have be gained" },
	};
#endif
	void Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bUseCompletionistAchievement_SetBit(void* Obj)
	{
		((UAchievementSystemSettings*)Obj)->bUseCompletionistAchievement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bUseCompletionistAchievement = { "bUseCompletionistAchievement", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAchievementSystemSettings), &Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bUseCompletionistAchievement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bUseCompletionistAchievement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bUseCompletionistAchievement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_CompletionistAchievementKey_MetaData[] = {
		{ "Category", "Achievements" },
		{ "Comment", "/**The key of the achievement to be unlocked when all others have be gained*/" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "The key of the achievement to be unlocked when all others have be gained" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_CompletionistAchievementKey = { "CompletionistAchievementKey", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSystemSettings, CompletionistAchievementKey), METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_CompletionistAchievementKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_CompletionistAchievementKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowAchievementUnlocks_MetaData[] = {
		{ "Category", "Achievement Unlocks" },
		{ "Comment", "/**If true, achievement unlock notifications will be displayed on the players screen. */" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "If true, achievement unlock notifications will be displayed on the players screen." },
	};
#endif
	void Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowAchievementUnlocks_SetBit(void* Obj)
	{
		((UAchievementSystemSettings*)Obj)->bShowAchievementUnlocks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowAchievementUnlocks = { "bShowAchievementUnlocks", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAchievementSystemSettings), &Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowAchievementUnlocks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowAchievementUnlocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowAchievementUnlocks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowAchievementProgress_MetaData[] = {
		{ "Category", "Achievement Unlocks" },
		{ "Comment", "/**If true, achievement progress update notifications will be displayed on the players screen. */" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "If true, achievement progress update notifications will be displayed on the players screen." },
	};
#endif
	void Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowAchievementProgress_SetBit(void* Obj)
	{
		((UAchievementSystemSettings*)Obj)->bShowAchievementProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowAchievementProgress = { "bShowAchievementProgress", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAchievementSystemSettings), &Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowAchievementProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowAchievementProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowAchievementProgress_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ScreenLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ScreenLocation_MetaData[] = {
		{ "Category", "Achievement Unlocks" },
		{ "Comment", "/**Define the corner of the screen that progress and unlock notifications will be displayed. */" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "Define the corner of the screen that progress and unlock notifications will be displayed." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ScreenLocation = { "ScreenLocation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSystemSettings, ScreenLocation), Z_Construct_UEnum_AchievementSystem_EAchievementSceenLocation, METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ScreenLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ScreenLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_TotalOnScreen_MetaData[] = {
		{ "Category", "Achievement Unlocks" },
		{ "Comment", "/**The total number of achievement notifications which can be on the screen at any one time.*/" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "The total number of achievement notifications which can be on the screen at any one time." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_TotalOnScreen = { "TotalOnScreen", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSystemSettings, TotalOnScreen), METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_TotalOnScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_TotalOnScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ScreenTime_MetaData[] = {
		{ "Category", "Achievement Unlocks" },
		{ "Comment", "/**The number of seconds an achievement will display on the screen once unlocked or progress is made.*/" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "The number of seconds an achievement will display on the screen once unlocked or progress is made." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ScreenTime = { "ScreenTime", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSystemSettings, ScreenTime), METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ScreenTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ScreenTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowExactProgress_MetaData[] = {
		{ "Category", "Achievement Unlocks" },
		{ "Comment", "/**If true, progress notifications will display their exact progress, if false it will show the closest bracket.*/" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "If true, progress notifications will display their exact progress, if false it will show the closest bracket." },
	};
#endif
	void Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowExactProgress_SetBit(void* Obj)
	{
		((UAchievementSystemSettings*)Obj)->bShowExactProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowExactProgress = { "bShowExactProgress", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAchievementSystemSettings), &Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowExactProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowExactProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowExactProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_MaxDecimalPlaces_MetaData[] = {
		{ "Category", "Achievement Unlocks" },
		{ "Comment", "/**The max number of decimal places which can be displayed on a UI Achievement*/" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "The max number of decimal places which can be displayed on a UI Achievement" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_MaxDecimalPlaces = { "MaxDecimalPlaces", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSystemSettings, MaxDecimalPlaces), METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_MaxDecimalPlaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_MaxDecimalPlaces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bAutoSave_MetaData[] = {
		{ "Category", "Achievement Unlocks" },
		{ "Comment", "/**If true, the state of all achievements will be saved without any user input. If false, achievement states must be saved manually by calling  SaveAchievementState().*/" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "If true, the state of all achievements will be saved without any user input. If false, achievement states must be saved manually by calling  SaveAchievementState()." },
	};
#endif
	void Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bAutoSave_SetBit(void* Obj)
	{
		((UAchievementSystemSettings*)Obj)->bAutoSave = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bAutoSave = { "bAutoSave", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAchievementSystemSettings), &Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bAutoSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bAutoSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bAutoSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_SaveGameName_MetaData[] = {
		{ "Category", "Achievement Unlocks" },
		{ "Comment", "/**The name of the save game slot used to keep track of achievement states.*/" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "The name of the save game slot used to keep track of achievement states." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSystemSettings, SaveGameName), METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_SaveGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_SaveGameName_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ExitAnimation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ExitAnimation_MetaData[] = {
		{ "Category", "Achievement Animation" },
		{ "Comment", "/**The animation that is played when notifications are removed from the screen. This can either be Fade, Disappear, Slide or Scale Down.*/" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "The animation that is played when notifications are removed from the screen. This can either be Fade, Disappear, Slide or Scale Down." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ExitAnimation = { "ExitAnimation", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSystemSettings, ExitAnimation), Z_Construct_UEnum_AchievementSystem_EAchievementAnimation, METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ExitAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ExitAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ExitAnimationLength_MetaData[] = {
		{ "Category", "Achievement Animation" },
		{ "Comment", "/**The number of seconds an achievement notification takes to leave the screen.*/" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "The number of seconds an achievement notification takes to leave the screen." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ExitAnimationLength = { "ExitAnimationLength", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSystemSettings, ExitAnimationLength), METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ExitAnimationLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ExitAnimationLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_EntranceAnimationLength_MetaData[] = {
		{ "Category", "Achievement Animation" },
		{ "Comment", "/**The number of seconds an achievement notification takes to enter the screen.*/" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "The number of seconds an achievement notification takes to enter the screen." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_EntranceAnimationLength = { "EntranceAnimationLength", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSystemSettings, EntranceAnimationLength), METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_EntranceAnimationLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_EntranceAnimationLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_UnlockSound_MetaData[] = {
		{ "AllowedClasses", "SoundBase" },
		{ "Category", "Sound" },
		{ "Comment", "/**The sound that plays when an achievement is unlocked is displayed to a user. Only plays if ShowAchievementUnlocks is true.*/" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "The sound that plays when an achievement is unlocked is displayed to a user. Only plays if ShowAchievementUnlocks is true." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_UnlockSound = { "UnlockSound", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSystemSettings, UnlockSound), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_UnlockSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_UnlockSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ProgressMadeSound_MetaData[] = {
		{ "AllowedClasses", "SoundBase" },
		{ "Category", "Sound" },
		{ "Comment", "/**The sound that plays when a progress update is displayed to a user. Only plays if ShowAchievementProgress is true.*/" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "The sound that plays when a progress update is displayed to a user. Only plays if ShowAchievementProgress is true." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ProgressMadeSound = { "ProgressMadeSound", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSystemSettings, ProgressMadeSound), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ProgressMadeSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ProgressMadeSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_UiAchievementOverride_MetaData[] = {
		{ "Category", "UI Achievement Indicator" },
		{ "Comment", "/**Use this achievement ui to display progress and unlock updates to the players screen*/" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "Use this achievement ui to display progress and unlock updates to the players screen" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_UiAchievementOverride = { "UiAchievementOverride", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSystemSettings, UiAchievementOverride), Z_Construct_UClass_UUIAchievement_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_UiAchievementOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_UiAchievementOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_AchievedWord_MetaData[] = {
		{ "Category", "UI Achievement Indicator" },
		{ "Comment", "/**Appends to the progress bar when an achievement has not been achieved*/" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "Appends to the progress bar when an achievement has not been achieved" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_AchievedWord = { "AchievedWord", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSystemSettings, AchievedWord), METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_AchievedWord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_AchievedWord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_UnAchievedWord_MetaData[] = {
		{ "Category", "UI Achievement Indicator" },
		{ "Comment", "/**Appends to the progress bar when an achievement is achieved*/" },
		{ "ModuleRelativePath", "Public/AchievementSystemSettings.h" },
		{ "ToolTip", "Appends to the progress bar when an achievement is achieved" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_UnAchievedWord = { "UnAchievedWord", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSystemSettings, UnAchievedWord), METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_UnAchievedWord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_UnAchievedWord_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAchievementSystemSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_Achievements_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_Achievements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bUseCompletionistAchievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_CompletionistAchievementKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowAchievementUnlocks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowAchievementProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ScreenLocation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ScreenLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_TotalOnScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ScreenTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bShowExactProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_MaxDecimalPlaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_bAutoSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_SaveGameName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ExitAnimation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ExitAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ExitAnimationLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_EntranceAnimationLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_UnlockSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_ProgressMadeSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_UiAchievementOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_AchievedWord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSystemSettings_Statics::NewProp_UnAchievedWord,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAchievementSystemSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAchievementSystemSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAchievementSystemSettings_Statics::ClassParams = {
		&UAchievementSystemSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAchievementSystemSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAchievementSystemSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSystemSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAchievementSystemSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAchievementSystemSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAchievementSystemSettings, 2415357325);
	template<> ACHIEVEMENTSYSTEM_API UClass* StaticClass<UAchievementSystemSettings>()
	{
		return UAchievementSystemSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAchievementSystemSettings(Z_Construct_UClass_UAchievementSystemSettings, &UAchievementSystemSettings::StaticClass, TEXT("/Script/AchievementSystem"), TEXT("UAchievementSystemSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAchievementSystemSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
