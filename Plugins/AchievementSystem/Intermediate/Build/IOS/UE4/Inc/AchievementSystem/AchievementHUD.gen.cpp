// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AchievementSystem/Public/AchievementHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementHUD() {}
// Cross Module References
	ACHIEVEMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementPackage();
	UPackage* Z_Construct_UPackage__Script_AchievementSystem();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementHUD_NoRegister();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UUIAchievement_NoRegister();
	ACHIEVEMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementData();
	ACHIEVEMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementStates();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementSystemSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
class UScriptStruct* FAchievementPackage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ACHIEVEMENTSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FAchievementPackage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAchievementPackage, Z_Construct_UPackage__Script_AchievementSystem(), TEXT("AchievementPackage"), sizeof(FAchievementPackage), Get_Z_Construct_UScriptStruct_FAchievementPackage_Hash());
	}
	return Singleton;
}
template<> ACHIEVEMENTSYSTEM_API UScriptStruct* StaticStruct<FAchievementPackage>()
{
	return FAchievementPackage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAchievementPackage(FAchievementPackage::StaticStruct, TEXT("/Script/AchievementSystem"), TEXT("AchievementPackage"), false, nullptr, nullptr);
static struct FScriptStruct_AchievementSystem_StaticRegisterNativesFAchievementPackage
{
	FScriptStruct_AchievementSystem_StaticRegisterNativesFAchievementPackage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AchievementPackage")),new UScriptStruct::TCppStructOps<FAchievementPackage>);
	}
} ScriptStruct_AchievementSystem_StaticRegisterNativesFAchievementPackage;
	struct Z_Construct_UScriptStruct_FAchievementPackage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAchievementPackage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AchievementHUD.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAchievementPackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAchievementPackage>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAchievementPackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AchievementSystem,
		nullptr,
		&NewStructOps,
		"AchievementPackage",
		sizeof(FAchievementPackage),
		alignof(FAchievementPackage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAchievementPackage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAchievementPackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAchievementPackage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAchievementPackage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AchievementSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AchievementPackage"), sizeof(FAchievementPackage), Get_Z_Construct_UScriptStruct_FAchievementPackage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAchievementPackage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAchievementPackage_Hash() { return 1365393870U; }
	DEFINE_FUNCTION(UAchievementHUD::execOnAchievementDeath)
	{
		P_GET_OBJECT(UUIAchievement,Z_Param_Achievement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAchievementDeath(Z_Param_Achievement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAchievementHUD::execScheduleAchievementDisplay)
	{
		P_GET_STRUCT(FAchievementData,Z_Param_Achievement);
		P_GET_STRUCT(FAchievementStates,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScheduleAchievementDisplay(Z_Param_Achievement,Z_Param_State);
		P_NATIVE_END;
	}
	void UAchievementHUD::StaticRegisterNativesUAchievementHUD()
	{
		UClass* Class = UAchievementHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAchievementDeath", &UAchievementHUD::execOnAchievementDeath },
			{ "ScheduleAchievementDisplay", &UAchievementHUD::execScheduleAchievementDisplay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAchievementHUD_OnAchievementDeath_Statics
	{
		struct AchievementHUD_eventOnAchievementDeath_Parms
		{
			UUIAchievement* Achievement;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Achievement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Achievement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementHUD_OnAchievementDeath_Statics::NewProp_Achievement_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementHUD_OnAchievementDeath_Statics::NewProp_Achievement = { "Achievement", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementHUD_eventOnAchievementDeath_Parms, Achievement), Z_Construct_UClass_UUIAchievement_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAchievementHUD_OnAchievementDeath_Statics::NewProp_Achievement_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementHUD_OnAchievementDeath_Statics::NewProp_Achievement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementHUD_OnAchievementDeath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementHUD_OnAchievementDeath_Statics::NewProp_Achievement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementHUD_OnAchievementDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AchievementHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementHUD_OnAchievementDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementHUD, nullptr, "OnAchievementDeath", nullptr, nullptr, sizeof(AchievementHUD_eventOnAchievementDeath_Parms), Z_Construct_UFunction_UAchievementHUD_OnAchievementDeath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementHUD_OnAchievementDeath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementHUD_OnAchievementDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementHUD_OnAchievementDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementHUD_OnAchievementDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementHUD_OnAchievementDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAchievementHUD_ScheduleAchievementDisplay_Statics
	{
		struct AchievementHUD_eventScheduleAchievementDisplay_Parms
		{
			FAchievementData Achievement;
			FAchievementStates State;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Achievement;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAchievementHUD_ScheduleAchievementDisplay_Statics::NewProp_Achievement = { "Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementHUD_eventScheduleAchievementDisplay_Parms, Achievement), Z_Construct_UScriptStruct_FAchievementData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAchievementHUD_ScheduleAchievementDisplay_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementHUD_eventScheduleAchievementDisplay_Parms, State), Z_Construct_UScriptStruct_FAchievementStates, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementHUD_ScheduleAchievementDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementHUD_ScheduleAchievementDisplay_Statics::NewProp_Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementHUD_ScheduleAchievementDisplay_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementHUD_ScheduleAchievementDisplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Achievement HUD" },
		{ "ModuleRelativePath", "Public/AchievementHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementHUD_ScheduleAchievementDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementHUD, nullptr, "ScheduleAchievementDisplay", nullptr, nullptr, sizeof(AchievementHUD_eventScheduleAchievementDisplay_Parms), Z_Construct_UFunction_UAchievementHUD_ScheduleAchievementDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementHUD_ScheduleAchievementDisplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementHUD_ScheduleAchievementDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementHUD_ScheduleAchievementDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementHUD_ScheduleAchievementDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementHUD_ScheduleAchievementDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAchievementHUD_NoRegister()
	{
		return UAchievementHUD::StaticClass();
	}
	struct Z_Construct_UClass_UAchievementHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Canvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Canvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Active_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Active;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackLog_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackLog_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockSound_Loaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnlockSound_Loaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressMadeSound_Loaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressMadeSound_Loaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAchievementHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AchievementSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAchievementHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAchievementHUD_OnAchievementDeath, "OnAchievementDeath" }, // 3889115098
		{ &Z_Construct_UFunction_UAchievementHUD_ScheduleAchievementDisplay, "ScheduleAchievementDisplay" }, // 3739429377
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AchievementHUD.h" },
		{ "ModuleRelativePath", "Public/AchievementHUD.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Canvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AchievementHUD.h" },
		{ "OptionalWidget", "FALSE" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementHUD, Canvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Canvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Canvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AchievementHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementHUD, Settings), Z_Construct_UClass_UAchievementSystemSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Active_Inner = { "Active", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUIAchievement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Active_MetaData[] = {
		{ "Comment", "//List to store active achievement + backlogged data \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AchievementHUD.h" },
		{ "ToolTip", "List to store active achievement + backlogged data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementHUD, Active), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Active_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAchievementHUD_Statics::NewProp_BackLog_Inner = { "BackLog", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAchievementPackage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementHUD_Statics::NewProp_BackLog_MetaData[] = {
		{ "ModuleRelativePath", "Public/AchievementHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAchievementHUD_Statics::NewProp_BackLog = { "BackLog", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementHUD, BackLog), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAchievementHUD_Statics::NewProp_BackLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementHUD_Statics::NewProp_BackLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementHUD_Statics::NewProp_UnlockSound_Loaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/AchievementHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementHUD_Statics::NewProp_UnlockSound_Loaded = { "UnlockSound_Loaded", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementHUD, UnlockSound_Loaded), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementHUD_Statics::NewProp_UnlockSound_Loaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementHUD_Statics::NewProp_UnlockSound_Loaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementHUD_Statics::NewProp_ProgressMadeSound_Loaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/AchievementHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementHUD_Statics::NewProp_ProgressMadeSound_Loaded = { "ProgressMadeSound_Loaded", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementHUD, ProgressMadeSound_Loaded), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementHUD_Statics::NewProp_ProgressMadeSound_Loaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementHUD_Statics::NewProp_ProgressMadeSound_Loaded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAchievementHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Canvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Active_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementHUD_Statics::NewProp_Active,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementHUD_Statics::NewProp_BackLog_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementHUD_Statics::NewProp_BackLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementHUD_Statics::NewProp_UnlockSound_Loaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementHUD_Statics::NewProp_ProgressMadeSound_Loaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAchievementHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAchievementHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAchievementHUD_Statics::ClassParams = {
		&UAchievementHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAchievementHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAchievementHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAchievementHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAchievementHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAchievementHUD, 696501359);
	template<> ACHIEVEMENTSYSTEM_API UClass* StaticClass<UAchievementHUD>()
	{
		return UAchievementHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAchievementHUD(Z_Construct_UClass_UAchievementHUD, &UAchievementHUD::StaticClass, TEXT("/Script/AchievementSystem"), TEXT("UAchievementHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAchievementHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
