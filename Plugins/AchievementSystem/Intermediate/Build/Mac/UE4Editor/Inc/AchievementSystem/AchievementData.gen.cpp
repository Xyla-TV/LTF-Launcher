// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AchievementSystem/Public/AchievementData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementData() {}
// Cross Module References
	ACHIEVEMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementData();
	UPackage* Z_Construct_UPackage__Script_AchievementSystem();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FAchievementData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACHIEVEMENTSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FAchievementData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAchievementData, Z_Construct_UPackage__Script_AchievementSystem(), TEXT("AchievementData"), sizeof(FAchievementData), Get_Z_Construct_UScriptStruct_FAchievementData_Hash());
	}
	return Singleton;
}
template<> ACHIEVEMENTSYSTEM_API UScriptStruct* StaticStruct<FAchievementData>()
{
	return FAchievementData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAchievementData(FAchievementData::StaticStruct, TEXT("/Script/AchievementSystem"), TEXT("AchievementData"), false, nullptr, nullptr);
static struct FScriptStruct_AchievementSystem_StaticRegisterNativesFAchievementData
{
	FScriptStruct_AchievementSystem_StaticRegisterNativesFAchievementData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AchievementData")),new UScriptStruct::TCppStructOps<FAchievementData>);
	}
} ScriptStruct_AchievementSystem_StaticRegisterNativesFAchievementData;
	struct Z_Construct_UScriptStruct_FAchievementData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockedIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievedIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AchievedIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockOverlay_MetaData[];
#endif
		static void NewProp_LockOverlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockOverlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spoiler_MetaData[];
#endif
		static void NewProp_Spoiler_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Spoiler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static void NewProp_Progress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressGoal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotificationFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NotificationFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntProgress_MetaData[];
#endif
		static void NewProp_IntProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IntProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressSuffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProgressSuffix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AchievementData.h" },
		{ "ToolTip", "Stores all data related to a single achievement" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAchievementData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAchievementData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Achievement Data" },
		{ "ModuleRelativePath", "Public/AchievementData.h" },
		{ "ToolTip", "A unique key used to identify an achievement in blueprint/C++ code." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementData, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Achievement Data" },
		{ "ModuleRelativePath", "Public/AchievementData.h" },
		{ "ToolTip", "The name of the achievement which the player will see in-game." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Achievement Data" },
		{ "ModuleRelativePath", "Public/AchievementData.h" },
		{ "ToolTip", "A short description which tells the player how to earn the achievement." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_LockedIcon_MetaData[] = {
		{ "Category", "Achievement Data" },
		{ "ModuleRelativePath", "Public/AchievementData.h" },
		{ "ShortTooltip", "Icon to display when locked" },
		{ "ToolTip", "Icon to display when locked. Overlay this if LockOverlay is true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_LockedIcon = { "LockedIcon", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementData, LockedIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_LockedIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_LockedIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_AchievedIcon_MetaData[] = {
		{ "Category", "Achievement Data" },
		{ "ModuleRelativePath", "Public/AchievementData.h" },
		{ "ToolTip", "Icon to display when achieved" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_AchievedIcon = { "AchievedIcon", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementData, AchievedIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_AchievedIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_AchievedIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_LockOverlay_MetaData[] = {
		{ "Category", "Achievement Data" },
		{ "ModuleRelativePath", "Public/AchievementData.h" },
		{ "ToolTip", "If true, LockedIcon will be rendered on top of the achieved icon" },
	};
#endif
	void Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_LockOverlay_SetBit(void* Obj)
	{
		((FAchievementData*)Obj)->LockOverlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_LockOverlay = { "LockOverlay", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAchievementData), &Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_LockOverlay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_LockOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_LockOverlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Spoiler_MetaData[] = {
		{ "Category", "Achievement Data" },
		{ "ModuleRelativePath", "Public/AchievementData.h" },
		{ "ToolTip", "Treat the current achievement as a spoiler for the game. Hidden from player until unlocked." },
	};
#endif
	void Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Spoiler_SetBit(void* Obj)
	{
		((FAchievementData*)Obj)->Spoiler = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Spoiler = { "Spoiler", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAchievementData), &Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Spoiler_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Spoiler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Spoiler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Progress_MetaData[] = {
		{ "Category", "Achievement Data" },
		{ "ModuleRelativePath", "Public/AchievementData.h" },
		{ "ToolTip", "If true this achievement will count to a certain amount before unlocking. E.g. race a total of 500 km, collect 10 coins or reach a high score of 25." },
	};
#endif
	void Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Progress_SetBit(void* Obj)
	{
		((FAchievementData*)Obj)->Progress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAchievementData), &Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Progress_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_ProgressGoal_MetaData[] = {
		{ "Category", "Achievement Data" },
		{ "EditCondition", "Progress" },
		{ "ModuleRelativePath", "Public/AchievementData.h" },
		{ "ToolTip", "The goal which must be reached for the achievement to unlock." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_ProgressGoal = { "ProgressGoal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementData, ProgressGoal), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_ProgressGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_ProgressGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_NotificationFrequency_MetaData[] = {
		{ "Category", "Achievement Data" },
		{ "EditCondition", "Progress" },
		{ "ModuleRelativePath", "Public/AchievementData.h" },
		{ "ToolTip", "The rate that progress updates will be displayed on the screen e.g. Progress goal = 100 and Notification Frequency = 25. In this example, the progress will be displayed at 25,50,75 and 100." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_NotificationFrequency = { "NotificationFrequency", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementData, NotificationFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_NotificationFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_NotificationFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_IntProgress_MetaData[] = {
		{ "Category", "Achievement Data" },
		{ "EditCondition", "Progress" },
		{ "ModuleRelativePath", "Public/AchievementData.h" },
		{ "ToolTip", "Treat this progress achievement as an integer(full number). Truncates value before displaying." },
	};
#endif
	void Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_IntProgress_SetBit(void* Obj)
	{
		((FAchievementData*)Obj)->IntProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_IntProgress = { "IntProgress", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAchievementData), &Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_IntProgress_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_IntProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_IntProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_ProgressSuffix_MetaData[] = {
		{ "Category", "Achievement Data" },
		{ "EditCondition", "Progress" },
		{ "ModuleRelativePath", "Public/AchievementData.h" },
		{ "ToolTip", "A string which will be displayed with a progress achievement e.g. $, KM, Miles etc" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_ProgressSuffix = { "ProgressSuffix", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementData, ProgressSuffix), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_ProgressSuffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_ProgressSuffix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAchievementData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_LockedIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_AchievedIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_LockOverlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Spoiler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_ProgressGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_NotificationFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_IntProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementData_Statics::NewProp_ProgressSuffix,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAchievementData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AchievementSystem,
		nullptr,
		&NewStructOps,
		"AchievementData",
		sizeof(FAchievementData),
		alignof(FAchievementData),
		Z_Construct_UScriptStruct_FAchievementData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAchievementData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAchievementData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AchievementSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AchievementData"), sizeof(FAchievementData), Get_Z_Construct_UScriptStruct_FAchievementData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAchievementData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAchievementData_Hash() { return 2264351346U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
