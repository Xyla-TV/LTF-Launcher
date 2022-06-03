// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AchievementSystem/Public/AchievementSubSystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementSubSystem() {}
// Cross Module References
	ACHIEVEMENTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AchievementSystem();
	ACHIEVEMENTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementUnlock__DelegateSignature();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementSubSystem_NoRegister();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementSubSystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ACHIEVEMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementData();
	ACHIEVEMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementStates();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementSaveGame_NoRegister();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementSystemSettings_NoRegister();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementHUD_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature_Statics
	{
		struct _Script_AchievementSystem_eventOnAchievementProgressUpdate_Parms
		{
			FName AchievementName;
			float NewProgress;
			float Change;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AchievementName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewProgress;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Change;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AchievementSystem_eventOnAchievementProgressUpdate_Parms, AchievementName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature_Statics::NewProp_NewProgress = { "NewProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AchievementSystem_eventOnAchievementProgressUpdate_Parms, NewProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature_Statics::NewProp_Change = { "Change", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AchievementSystem_eventOnAchievementProgressUpdate_Parms, Change), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature_Statics::NewProp_AchievementName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature_Statics::NewProp_NewProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature_Statics::NewProp_Change,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AchievementSystem, nullptr, "OnAchievementProgressUpdate__DelegateSignature", nullptr, nullptr, sizeof(_Script_AchievementSystem_eventOnAchievementProgressUpdate_Parms), Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementUnlock__DelegateSignature_Statics
	{
		struct _Script_AchievementSystem_eventOnAchievementUnlock_Parms
		{
			FName AchievementName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AchievementName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementUnlock__DelegateSignature_Statics::NewProp_AchievementName = { "AchievementName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AchievementSystem_eventOnAchievementUnlock_Parms, AchievementName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementUnlock__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementUnlock__DelegateSignature_Statics::NewProp_AchievementName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementUnlock__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementUnlock__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AchievementSystem, nullptr, "OnAchievementUnlock__DelegateSignature", nullptr, nullptr, sizeof(_Script_AchievementSystem_eventOnAchievementUnlock_Parms), Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementUnlock__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementUnlock__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementUnlock__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementUnlock__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementUnlock__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementUnlock__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAchievementSubSystem::execResetAchievementStates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAchievementStates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAchievementSubSystem::execSaveAchievementState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveAchievementState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAchievementSubSystem::execAddAchievementProgress)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAchievementProgress(Z_Param_Key,Z_Param_Progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAchievementSubSystem::execSetAchievementProgress)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAchievementProgress(Z_Param_Key,Z_Param_Progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAchievementSubSystem::execUnlock)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unlock(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAchievementSubSystem::execGetAchievementState)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_UBOOL_REF(Z_Param_Out_FoundAchievement);
		P_GET_STRUCT_REF(FAchievementData,Z_Param_Out_Data);
		P_GET_STRUCT_REF(FAchievementStates,Z_Param_Out_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAchievementState(Z_Param_Key,Z_Param_Out_FoundAchievement,Z_Param_Out_Data,Z_Param_Out_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAchievementSubSystem::execGetAchievedPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAchievedPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAchievementSubSystem::execGetAchievedCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAchievedCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAchievementSubSystem::execAchievementExists)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AchievementExists(Z_Param_Key);
		P_NATIVE_END;
	}
	void UAchievementSubSystem::StaticRegisterNativesUAchievementSubSystem()
	{
		UClass* Class = UAchievementSubSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AchievementExists", &UAchievementSubSystem::execAchievementExists },
			{ "AddAchievementProgress", &UAchievementSubSystem::execAddAchievementProgress },
			{ "GetAchievedCount", &UAchievementSubSystem::execGetAchievedCount },
			{ "GetAchievedPercentage", &UAchievementSubSystem::execGetAchievedPercentage },
			{ "GetAchievementState", &UAchievementSubSystem::execGetAchievementState },
			{ "ResetAchievementStates", &UAchievementSubSystem::execResetAchievementStates },
			{ "SaveAchievementState", &UAchievementSubSystem::execSaveAchievementState },
			{ "SetAchievementProgress", &UAchievementSubSystem::execSetAchievementProgress },
			{ "Unlock", &UAchievementSubSystem::execUnlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAchievementSubSystem_AchievementExists_Statics
	{
		struct AchievementSubSystem_eventAchievementExists_Parms
		{
			FName Key;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAchievementSubSystem_AchievementExists_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementSubSystem_eventAchievementExists_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAchievementSubSystem_AchievementExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AchievementSubSystem_eventAchievementExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAchievementSubSystem_AchievementExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AchievementSubSystem_eventAchievementExists_Parms), &Z_Construct_UFunction_UAchievementSubSystem_AchievementExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementSubSystem_AchievementExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementSubSystem_AchievementExists_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementSubSystem_AchievementExists_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementSubSystem_AchievementExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "Achievements" },
		{ "Comment", "/**Returns true if an achievement is found in the list.*/" },
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
		{ "ToolTip", "Returns true if an achievement is found in the list." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementSubSystem_AchievementExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementSubSystem, nullptr, "AchievementExists", nullptr, nullptr, sizeof(AchievementSubSystem_eventAchievementExists_Parms), Z_Construct_UFunction_UAchievementSubSystem_AchievementExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementSubSystem_AchievementExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementSubSystem_AchievementExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementSubSystem_AchievementExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementSubSystem_AchievementExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementSubSystem_AchievementExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAchievementSubSystem_AddAchievementProgress_Statics
	{
		struct AchievementSubSystem_eventAddAchievementProgress_Parms
		{
			FName Key;
			float Progress;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAchievementSubSystem_AddAchievementProgress_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementSubSystem_eventAddAchievementProgress_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAchievementSubSystem_AddAchievementProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementSubSystem_eventAddAchievementProgress_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementSubSystem_AddAchievementProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementSubSystem_AddAchievementProgress_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementSubSystem_AddAchievementProgress_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementSubSystem_AddAchievementProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Achievements" },
		{ "Comment", "/**Adds the input amount of progress to an achievement. Clamps achievement progress to its max value.*/" },
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
		{ "ToolTip", "Adds the input amount of progress to an achievement. Clamps achievement progress to its max value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementSubSystem_AddAchievementProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementSubSystem, nullptr, "AddAchievementProgress", nullptr, nullptr, sizeof(AchievementSubSystem_eventAddAchievementProgress_Parms), Z_Construct_UFunction_UAchievementSubSystem_AddAchievementProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementSubSystem_AddAchievementProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementSubSystem_AddAchievementProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementSubSystem_AddAchievementProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementSubSystem_AddAchievementProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementSubSystem_AddAchievementProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAchievementSubSystem_GetAchievedCount_Statics
	{
		struct AchievementSubSystem_eventGetAchievedCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAchievementSubSystem_GetAchievedCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementSubSystem_eventGetAchievedCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementSubSystem_GetAchievedCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementSubSystem_GetAchievedCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementSubSystem_GetAchievedCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Achievements" },
		{ "Comment", "/**Returns the total number of achievements which have been unlocked.*/" },
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
		{ "ToolTip", "Returns the total number of achievements which have been unlocked." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementSubSystem_GetAchievedCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementSubSystem, nullptr, "GetAchievedCount", nullptr, nullptr, sizeof(AchievementSubSystem_eventGetAchievedCount_Parms), Z_Construct_UFunction_UAchievementSubSystem_GetAchievedCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementSubSystem_GetAchievedCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementSubSystem_GetAchievedCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementSubSystem_GetAchievedCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementSubSystem_GetAchievedCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementSubSystem_GetAchievedCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAchievementSubSystem_GetAchievedPercentage_Statics
	{
		struct AchievementSubSystem_eventGetAchievedPercentage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAchievementSubSystem_GetAchievedPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementSubSystem_eventGetAchievedPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementSubSystem_GetAchievedPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementSubSystem_GetAchievedPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementSubSystem_GetAchievedPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Achievements" },
		{ "Comment", "/**Returns the current percentage of unlocked achievements.*/" },
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
		{ "ToolTip", "Returns the current percentage of unlocked achievements." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementSubSystem_GetAchievedPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementSubSystem, nullptr, "GetAchievedPercentage", nullptr, nullptr, sizeof(AchievementSubSystem_eventGetAchievedPercentage_Parms), Z_Construct_UFunction_UAchievementSubSystem_GetAchievedPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementSubSystem_GetAchievedPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementSubSystem_GetAchievedPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementSubSystem_GetAchievedPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementSubSystem_GetAchievedPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementSubSystem_GetAchievedPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics
	{
		struct AchievementSubSystem_eventGetAchievementState_Parms
		{
			FName Key;
			bool FoundAchievement;
			FAchievementData Data;
			FAchievementStates State;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static void NewProp_FoundAchievement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FoundAchievement;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementSubSystem_eventGetAchievementState_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::NewProp_FoundAchievement_SetBit(void* Obj)
	{
		((AchievementSubSystem_eventGetAchievementState_Parms*)Obj)->FoundAchievement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::NewProp_FoundAchievement = { "FoundAchievement", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AchievementSubSystem_eventGetAchievementState_Parms), &Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::NewProp_FoundAchievement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementSubSystem_eventGetAchievementState_Parms, Data), Z_Construct_UScriptStruct_FAchievementData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementSubSystem_eventGetAchievementState_Parms, State), Z_Construct_UScriptStruct_FAchievementStates, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::NewProp_FoundAchievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Achievements" },
		{ "Comment", "/***/" },
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementSubSystem, nullptr, "GetAchievementState", nullptr, nullptr, sizeof(AchievementSubSystem_eventGetAchievementState_Parms), Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAchievementSubSystem_ResetAchievementStates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementSubSystem_ResetAchievementStates_Statics::Function_MetaDataParams[] = {
		{ "Category", "Achievements" },
		{ "Comment", "/**Clears all saved progress and achieved states.*/" },
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
		{ "ToolTip", "Clears all saved progress and achieved states." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementSubSystem_ResetAchievementStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementSubSystem, nullptr, "ResetAchievementStates", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementSubSystem_ResetAchievementStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementSubSystem_ResetAchievementStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementSubSystem_ResetAchievementStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementSubSystem_ResetAchievementStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAchievementSubSystem_SaveAchievementState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementSubSystem_SaveAchievementState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Achievements" },
		{ "Comment", "/**Saves progress and achieved states to player prefs. This function is automatically called if the Auto Save setting is set to true.*/" },
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
		{ "ToolTip", "Saves progress and achieved states to player prefs. This function is automatically called if the Auto Save setting is set to true." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementSubSystem_SaveAchievementState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementSubSystem, nullptr, "SaveAchievementState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementSubSystem_SaveAchievementState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementSubSystem_SaveAchievementState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementSubSystem_SaveAchievementState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementSubSystem_SaveAchievementState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAchievementSubSystem_SetAchievementProgress_Statics
	{
		struct AchievementSubSystem_eventSetAchievementProgress_Parms
		{
			FName Key;
			float Progress;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAchievementSubSystem_SetAchievementProgress_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementSubSystem_eventSetAchievementProgress_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAchievementSubSystem_SetAchievementProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementSubSystem_eventSetAchievementProgress_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementSubSystem_SetAchievementProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementSubSystem_SetAchievementProgress_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementSubSystem_SetAchievementProgress_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementSubSystem_SetAchievementProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Achievements" },
		{ "Comment", "/**Set the progress of an achievement to a specific value.*/" },
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
		{ "ToolTip", "Set the progress of an achievement to a specific value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementSubSystem_SetAchievementProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementSubSystem, nullptr, "SetAchievementProgress", nullptr, nullptr, sizeof(AchievementSubSystem_eventSetAchievementProgress_Parms), Z_Construct_UFunction_UAchievementSubSystem_SetAchievementProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementSubSystem_SetAchievementProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementSubSystem_SetAchievementProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementSubSystem_SetAchievementProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementSubSystem_SetAchievementProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementSubSystem_SetAchievementProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAchievementSubSystem_Unlock_Statics
	{
		struct AchievementSubSystem_eventUnlock_Parms
		{
			FName Key;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAchievementSubSystem_Unlock_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementSubSystem_eventUnlock_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementSubSystem_Unlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementSubSystem_Unlock_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementSubSystem_Unlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Achievements" },
		{ "Comment", "/**Fully unlocks a progress or goal achievement.*/" },
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
		{ "ToolTip", "Fully unlocks a progress or goal achievement." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementSubSystem_Unlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementSubSystem, nullptr, "Unlock", nullptr, nullptr, sizeof(AchievementSubSystem_eventUnlock_Parms), Z_Construct_UFunction_UAchievementSubSystem_Unlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementSubSystem_Unlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementSubSystem_Unlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementSubSystem_Unlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementSubSystem_Unlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementSubSystem_Unlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAchievementSubSystem_NoRegister()
	{
		return UAchievementSubSystem::StaticClass();
	}
	struct Z_Construct_UClass_UAchievementSubSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAchievementProgressUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAchievementProgressUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAchievementUnlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAchievementUnlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Screen_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Screen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAchievementSubSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AchievementSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAchievementSubSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAchievementSubSystem_AchievementExists, "AchievementExists" }, // 3967555838
		{ &Z_Construct_UFunction_UAchievementSubSystem_AddAchievementProgress, "AddAchievementProgress" }, // 3840141742
		{ &Z_Construct_UFunction_UAchievementSubSystem_GetAchievedCount, "GetAchievedCount" }, // 4066210323
		{ &Z_Construct_UFunction_UAchievementSubSystem_GetAchievedPercentage, "GetAchievedPercentage" }, // 1772011493
		{ &Z_Construct_UFunction_UAchievementSubSystem_GetAchievementState, "GetAchievementState" }, // 339839022
		{ &Z_Construct_UFunction_UAchievementSubSystem_ResetAchievementStates, "ResetAchievementStates" }, // 4062182280
		{ &Z_Construct_UFunction_UAchievementSubSystem_SaveAchievementState, "SaveAchievementState" }, // 1823953834
		{ &Z_Construct_UFunction_UAchievementSubSystem_SetAchievementProgress, "SetAchievementProgress" }, // 3755133615
		{ &Z_Construct_UFunction_UAchievementSubSystem_Unlock, "Unlock" }, // 3693485572
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSubSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AchievementSubSystem.h" },
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_SaveGame_MetaData[] = {
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSubSystem, SaveGame), Z_Construct_UClass_UAchievementSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_SaveGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_SaveGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_OnAchievementProgressUpdate_MetaData[] = {
		{ "Category", "Achievements" },
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_OnAchievementProgressUpdate = { "OnAchievementProgressUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSubSystem, OnAchievementProgressUpdate), Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementProgressUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_OnAchievementProgressUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_OnAchievementProgressUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_OnAchievementUnlock_MetaData[] = {
		{ "Category", "Achievements" },
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_OnAchievementUnlock = { "OnAchievementUnlock", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSubSystem, OnAchievementUnlock), Z_Construct_UDelegateFunction_AchievementSystem_OnAchievementUnlock__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_OnAchievementUnlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_OnAchievementUnlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSubSystem, Settings), Z_Construct_UClass_UAchievementSystemSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_Screen_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AchievementSubSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_Screen = { "Screen", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSubSystem, Screen), Z_Construct_UClass_UAchievementHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_Screen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_Screen_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAchievementSubSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_SaveGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_OnAchievementProgressUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_OnAchievementUnlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSubSystem_Statics::NewProp_Screen,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAchievementSubSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAchievementSubSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAchievementSubSystem_Statics::ClassParams = {
		&UAchievementSubSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAchievementSubSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSubSystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAchievementSubSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSubSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAchievementSubSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAchievementSubSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAchievementSubSystem, 4235343627);
	template<> ACHIEVEMENTSYSTEM_API UClass* StaticClass<UAchievementSubSystem>()
	{
		return UAchievementSubSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAchievementSubSystem(Z_Construct_UClass_UAchievementSubSystem, &UAchievementSubSystem::StaticClass, TEXT("/Script/AchievementSystem"), TEXT("UAchievementSubSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAchievementSubSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
