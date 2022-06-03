// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AchievementSystem/Public/AchievementProgressDetails.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementProgressDetails() {}
// Cross Module References
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementProgressDetails_NoRegister();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementProgressDetails();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AchievementSystem();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementSubSystem_NoRegister();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementSystemSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAchievementProgressDetails::execUpdateDetails)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDetails();
		P_NATIVE_END;
	}
	void UAchievementProgressDetails::StaticRegisterNativesUAchievementProgressDetails()
	{
		UClass* Class = UAchievementProgressDetails::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateDetails", &UAchievementProgressDetails::execUpdateDetails },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAchievementProgressDetails_UpdateDetails_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementProgressDetails_UpdateDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "Achievement Progress Details" },
		{ "ModuleRelativePath", "Public/AchievementProgressDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementProgressDetails_UpdateDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementProgressDetails, nullptr, "UpdateDetails", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementProgressDetails_UpdateDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementProgressDetails_UpdateDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementProgressDetails_UpdateDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementProgressDetails_UpdateDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAchievementProgressDetails_NoRegister()
	{
		return UAchievementProgressDetails::StaticClass();
	}
	struct Z_Construct_UClass_UAchievementProgressDetails_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AchievementProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBarColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressBarColour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalProgressMaxDecimalPlaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalProgressMaxDecimalPlaces;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAchievementProgressDetails_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AchievementSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAchievementProgressDetails_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAchievementProgressDetails_UpdateDetails, "UpdateDetails" }, // 2571820746
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementProgressDetails_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AchievementProgressDetails.h" },
		{ "ModuleRelativePath", "Public/AchievementProgressDetails.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_Title_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AchievementProgressDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementProgressDetails, Title), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_ProgressText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AchievementProgressDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_ProgressText = { "ProgressText", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementProgressDetails, ProgressText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_ProgressText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_ProgressText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_AchievementProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AchievementProgressDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_AchievementProgressBar = { "AchievementProgressBar", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementProgressDetails, AchievementProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_AchievementProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_AchievementProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_TitleText_MetaData[] = {
		{ "Category", "Details" },
		{ "ModuleRelativePath", "Public/AchievementProgressDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementProgressDetails, TitleText), METADATA_PARAMS(Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_TitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_TitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_ProgressBarColour_MetaData[] = {
		{ "Category", "Details" },
		{ "ModuleRelativePath", "Public/AchievementProgressDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_ProgressBarColour = { "ProgressBarColour", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementProgressDetails, ProgressBarColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_ProgressBarColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_ProgressBarColour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_TotalProgressMaxDecimalPlaces_MetaData[] = {
		{ "Category", "Details" },
		{ "ModuleRelativePath", "Public/AchievementProgressDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_TotalProgressMaxDecimalPlaces = { "TotalProgressMaxDecimalPlaces", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementProgressDetails, TotalProgressMaxDecimalPlaces), METADATA_PARAMS(Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_TotalProgressMaxDecimalPlaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_TotalProgressMaxDecimalPlaces_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_SubSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/AchievementProgressDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_SubSystem = { "SubSystem", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementProgressDetails, SubSystem), Z_Construct_UClass_UAchievementSubSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_SubSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_SubSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AchievementProgressDetails.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementProgressDetails, Settings), Z_Construct_UClass_UAchievementSystemSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAchievementProgressDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_ProgressText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_AchievementProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_TitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_ProgressBarColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_TotalProgressMaxDecimalPlaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_SubSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementProgressDetails_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAchievementProgressDetails_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAchievementProgressDetails>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAchievementProgressDetails_Statics::ClassParams = {
		&UAchievementProgressDetails::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAchievementProgressDetails_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressDetails_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAchievementProgressDetails_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressDetails_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAchievementProgressDetails()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAchievementProgressDetails_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAchievementProgressDetails, 3227810585);
	template<> ACHIEVEMENTSYSTEM_API UClass* StaticClass<UAchievementProgressDetails>()
	{
		return UAchievementProgressDetails::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAchievementProgressDetails(Z_Construct_UClass_UAchievementProgressDetails, &UAchievementProgressDetails::StaticClass, TEXT("/Script/AchievementSystem"), TEXT("UAchievementProgressDetails"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAchievementProgressDetails);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
