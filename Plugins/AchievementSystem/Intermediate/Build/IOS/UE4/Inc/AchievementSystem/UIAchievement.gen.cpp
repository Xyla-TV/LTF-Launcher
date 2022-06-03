// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AchievementSystem/Public/UIAchievement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIAchievement() {}
// Cross Module References
	ACHIEVEMENTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_AchievementSystem_DeathEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AchievementSystem();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UUIAchievement_NoRegister();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UUIAchievement();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	ACHIEVEMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementData();
	ACHIEVEMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementStates();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementSystemSettings_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AchievementSystem_DeathEvent__DelegateSignature_Statics
	{
		struct _Script_AchievementSystem_eventDeathEvent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AchievementSystem_DeathEvent__DelegateSignature_Statics::NewProp_Achievement_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AchievementSystem_DeathEvent__DelegateSignature_Statics::NewProp_Achievement = { "Achievement", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AchievementSystem_eventDeathEvent_Parms, Achievement), Z_Construct_UClass_UUIAchievement_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_AchievementSystem_DeathEvent__DelegateSignature_Statics::NewProp_Achievement_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AchievementSystem_DeathEvent__DelegateSignature_Statics::NewProp_Achievement_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AchievementSystem_DeathEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AchievementSystem_DeathEvent__DelegateSignature_Statics::NewProp_Achievement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AchievementSystem_DeathEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AchievementSystem_DeathEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AchievementSystem, nullptr, "DeathEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_AchievementSystem_eventDeathEvent_Parms), Z_Construct_UDelegateFunction_AchievementSystem_DeathEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AchievementSystem_DeathEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AchievementSystem_DeathEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AchievementSystem_DeathEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AchievementSystem_DeathEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AchievementSystem_DeathEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUIAchievement::execOnDeathAnimationComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeathAnimationComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIAchievement::execOnDeathEvent)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AnimationLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDeathEvent(Z_Param_Animation,Z_Param_AnimationLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIAchievement::execSetValue)
	{
		P_GET_STRUCT(FAchievementData,Z_Param_Achievement);
		P_GET_STRUCT(FAchievementStates,Z_Param_State);
		P_GET_UBOOL(Z_Param_ShowExactProgress);
		P_GET_OBJECT(UAchievementSystemSettings,Z_Param_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_Achievement,Z_Param_State,Z_Param_ShowExactProgress,Z_Param_Settings);
		P_NATIVE_END;
	}
	void UUIAchievement::StaticRegisterNativesUUIAchievement()
	{
		UClass* Class = UUIAchievement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDeathAnimationComplete", &UUIAchievement::execOnDeathAnimationComplete },
			{ "OnDeathEvent", &UUIAchievement::execOnDeathEvent },
			{ "SetValue", &UUIAchievement::execSetValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIAchievement_OnDeathAnimationComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIAchievement_OnDeathAnimationComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Achievement" },
		{ "ModuleRelativePath", "Public/UIAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIAchievement_OnDeathAnimationComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIAchievement, nullptr, "OnDeathAnimationComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIAchievement_OnDeathAnimationComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIAchievement_OnDeathAnimationComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIAchievement_OnDeathAnimationComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIAchievement_OnDeathAnimationComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIAchievement_OnDeathEvent_Statics
	{
		struct UIAchievement_eventOnDeathEvent_Parms
		{
			UWidgetAnimation* Animation;
			float AnimationLength;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimationLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIAchievement_OnDeathEvent_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIAchievement_eventOnDeathEvent_Parms, Animation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUIAchievement_OnDeathEvent_Statics::NewProp_AnimationLength = { "AnimationLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIAchievement_eventOnDeathEvent_Parms, AnimationLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIAchievement_OnDeathEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIAchievement_OnDeathEvent_Statics::NewProp_Animation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIAchievement_OnDeathEvent_Statics::NewProp_AnimationLength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIAchievement_OnDeathEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Achievement" },
		{ "ModuleRelativePath", "Public/UIAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIAchievement_OnDeathEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIAchievement, nullptr, "OnDeathEvent", nullptr, nullptr, sizeof(UIAchievement_eventOnDeathEvent_Parms), Z_Construct_UFunction_UUIAchievement_OnDeathEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIAchievement_OnDeathEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIAchievement_OnDeathEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIAchievement_OnDeathEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIAchievement_OnDeathEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIAchievement_OnDeathEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIAchievement_SetValue_Statics
	{
		struct UIAchievement_eventSetValue_Parms
		{
			FAchievementData Achievement;
			FAchievementStates State;
			bool ShowExactProgress;
			UAchievementSystemSettings* Settings;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Achievement;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_State;
		static void NewProp_ShowExactProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowExactProgress;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIAchievement_SetValue_Statics::NewProp_Achievement = { "Achievement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIAchievement_eventSetValue_Parms, Achievement), Z_Construct_UScriptStruct_FAchievementData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIAchievement_SetValue_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIAchievement_eventSetValue_Parms, State), Z_Construct_UScriptStruct_FAchievementStates, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUIAchievement_SetValue_Statics::NewProp_ShowExactProgress_SetBit(void* Obj)
	{
		((UIAchievement_eventSetValue_Parms*)Obj)->ShowExactProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIAchievement_SetValue_Statics::NewProp_ShowExactProgress = { "ShowExactProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIAchievement_eventSetValue_Parms), &Z_Construct_UFunction_UUIAchievement_SetValue_Statics::NewProp_ShowExactProgress_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIAchievement_SetValue_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIAchievement_eventSetValue_Parms, Settings), Z_Construct_UClass_UAchievementSystemSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIAchievement_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIAchievement_SetValue_Statics::NewProp_Achievement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIAchievement_SetValue_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIAchievement_SetValue_Statics::NewProp_ShowExactProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIAchievement_SetValue_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIAchievement_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Achievement" },
		{ "ModuleRelativePath", "Public/UIAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIAchievement_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIAchievement, nullptr, "SetValue", nullptr, nullptr, sizeof(UIAchievement_eventSetValue_Parms), Z_Construct_UFunction_UUIAchievement_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIAchievement_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIAchievement_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIAchievement_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIAchievement_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIAchievement_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUIAchievement_NoRegister()
	{
		return UUIAchievement::StaticClass();
	}
	struct Z_Construct_UClass_UUIAchievement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PercentText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlayIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlayIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlideLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlideRight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScaleDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fade_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Fade;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIAchievement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AchievementSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIAchievement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIAchievement_OnDeathAnimationComplete, "OnDeathAnimationComplete" }, // 3030395729
		{ &Z_Construct_UFunction_UUIAchievement_OnDeathEvent, "OnDeathEvent" }, // 243623083
		{ &Z_Construct_UFunction_UUIAchievement_SetValue, "SetValue" }, // 3358933310
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIAchievement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UIAchievement.h" },
		{ "ModuleRelativePath", "Public/UIAchievement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIAchievement_Statics::NewProp_Root_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIAchievement_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIAchievement, Root), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIAchievement_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIAchievement_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIAchievement_Statics::NewProp_Title_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "//Components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIAchievement.h" },
		{ "ToolTip", "Components" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIAchievement_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIAchievement, Title), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIAchievement_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIAchievement_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIAchievement_Statics::NewProp_Description_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIAchievement_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIAchievement, Description), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIAchievement_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIAchievement_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIAchievement_Statics::NewProp_PercentText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIAchievement_Statics::NewProp_PercentText = { "PercentText", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIAchievement, PercentText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIAchievement_Statics::NewProp_PercentText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIAchievement_Statics::NewProp_PercentText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIAchievement_Statics::NewProp_Icon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIAchievement_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIAchievement, Icon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIAchievement_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIAchievement_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIAchievement_Statics::NewProp_OverlayIcon_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIAchievement_Statics::NewProp_OverlayIcon = { "OverlayIcon", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIAchievement, OverlayIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIAchievement_Statics::NewProp_OverlayIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIAchievement_Statics::NewProp_OverlayIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIAchievement_Statics::NewProp_ProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIAchievement_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIAchievement, ProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIAchievement_Statics::NewProp_ProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIAchievement_Statics::NewProp_ProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIAchievement_Statics::NewProp_SlideLeft_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "Comment", "//Animations\n" },
		{ "ModuleRelativePath", "Public/UIAchievement.h" },
		{ "ToolTip", "Animations" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIAchievement_Statics::NewProp_SlideLeft = { "SlideLeft", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIAchievement, SlideLeft), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIAchievement_Statics::NewProp_SlideLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIAchievement_Statics::NewProp_SlideLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIAchievement_Statics::NewProp_SlideRight_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "ModuleRelativePath", "Public/UIAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIAchievement_Statics::NewProp_SlideRight = { "SlideRight", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIAchievement, SlideRight), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIAchievement_Statics::NewProp_SlideRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIAchievement_Statics::NewProp_SlideRight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIAchievement_Statics::NewProp_ScaleDown_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "ModuleRelativePath", "Public/UIAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIAchievement_Statics::NewProp_ScaleDown = { "ScaleDown", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIAchievement, ScaleDown), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIAchievement_Statics::NewProp_ScaleDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIAchievement_Statics::NewProp_ScaleDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIAchievement_Statics::NewProp_Fade_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "ModuleRelativePath", "Public/UIAchievement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIAchievement_Statics::NewProp_Fade = { "Fade", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIAchievement, Fade), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIAchievement_Statics::NewProp_Fade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIAchievement_Statics::NewProp_Fade_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIAchievement_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIAchievement_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIAchievement_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIAchievement_Statics::NewProp_PercentText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIAchievement_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIAchievement_Statics::NewProp_OverlayIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIAchievement_Statics::NewProp_ProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIAchievement_Statics::NewProp_SlideLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIAchievement_Statics::NewProp_SlideRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIAchievement_Statics::NewProp_ScaleDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIAchievement_Statics::NewProp_Fade,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIAchievement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIAchievement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIAchievement_Statics::ClassParams = {
		&UUIAchievement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIAchievement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIAchievement_Statics::PropPointers),
		0,
		0x04B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIAchievement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIAchievement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIAchievement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIAchievement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUIAchievement, 2243342493);
	template<> ACHIEVEMENTSYSTEM_API UClass* StaticClass<UUIAchievement>()
	{
		return UUIAchievement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIAchievement(Z_Construct_UClass_UUIAchievement, &UUIAchievement::StaticClass, TEXT("/Script/AchievementSystem"), TEXT("UUIAchievement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIAchievement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
