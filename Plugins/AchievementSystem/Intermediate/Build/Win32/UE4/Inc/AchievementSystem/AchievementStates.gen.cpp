// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AchievementSystem/Public/AchievementStates.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementStates() {}
// Cross Module References
	ACHIEVEMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementStates();
	UPackage* Z_Construct_UPackage__Script_AchievementSystem();
// End Cross Module References
class UScriptStruct* FAchievementStates::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACHIEVEMENTSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FAchievementStates_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAchievementStates, Z_Construct_UPackage__Script_AchievementSystem(), TEXT("AchievementStates"), sizeof(FAchievementStates), Get_Z_Construct_UScriptStruct_FAchievementStates_Hash());
	}
	return Singleton;
}
template<> ACHIEVEMENTSYSTEM_API UScriptStruct* StaticStruct<FAchievementStates>()
{
	return FAchievementStates::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAchievementStates(FAchievementStates::StaticStruct, TEXT("/Script/AchievementSystem"), TEXT("AchievementStates"), false, nullptr, nullptr);
static struct FScriptStruct_AchievementSystem_StaticRegisterNativesFAchievementStates
{
	FScriptStruct_AchievementSystem_StaticRegisterNativesFAchievementStates()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AchievementStates")),new UScriptStruct::TCppStructOps<FAchievementStates>);
	}
} ScriptStruct_AchievementSystem_StaticRegisterNativesFAchievementStates;
	struct Z_Construct_UScriptStruct_FAchievementStates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastProgressUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LastProgressUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Achieved_MetaData[];
#endif
		static void NewProp_Achieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Achieved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementStates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AchievementStates.h" },
		{ "ToolTip", "Stores / Saves the state of an achievement" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAchievementStates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAchievementStates>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_Progress_MetaData[] = {
		{ "Category", "Achievement States" },
		{ "ModuleRelativePath", "Public/AchievementStates.h" },
		{ "ToolTip", "Current progress" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementStates, Progress), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_LastProgressUpdate_MetaData[] = {
		{ "Category", "Achievement States" },
		{ "ModuleRelativePath", "Public/AchievementStates.h" },
		{ "ToolTip", "Last progress notification bracket" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_LastProgressUpdate = { "LastProgressUpdate", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAchievementStates, LastProgressUpdate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_LastProgressUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_LastProgressUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_Achieved_MetaData[] = {
		{ "Category", "Achievement States" },
		{ "ModuleRelativePath", "Public/AchievementStates.h" },
		{ "ToolTip", "Has this been unlocked" },
	};
#endif
	void Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_Achieved_SetBit(void* Obj)
	{
		((FAchievementStates*)Obj)->Achieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_Achieved = { "Achieved", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAchievementStates), &Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_Achieved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_Achieved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_Achieved_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAchievementStates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_LastProgressUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAchievementStates_Statics::NewProp_Achieved,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAchievementStates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AchievementSystem,
		nullptr,
		&NewStructOps,
		"AchievementStates",
		sizeof(FAchievementStates),
		alignof(FAchievementStates),
		Z_Construct_UScriptStruct_FAchievementStates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementStates_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementStates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementStates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAchievementStates()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAchievementStates_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AchievementSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AchievementStates"), sizeof(FAchievementStates), Get_Z_Construct_UScriptStruct_FAchievementStates_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAchievementStates_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAchievementStates_Hash() { return 4026648000U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
