// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AchievementSystem/Public/AchievementSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementSaveGame() {}
// Cross Module References
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementSaveGame_NoRegister();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_AchievementSystem();
	ACHIEVEMENTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAchievementStates();
// End Cross Module References
	void UAchievementSaveGame::StaticRegisterNativesUAchievementSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UAchievementSaveGame_NoRegister()
	{
		return UAchievementSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UAchievementSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_States_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_States_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_States;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalUnlocked_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalUnlocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAchievementSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_AchievementSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AchievementSaveGame.h" },
		{ "ModuleRelativePath", "Public/AchievementSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAchievementSaveGame_Statics::NewProp_States_Inner = { "States", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAchievementStates, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSaveGame_Statics::NewProp_States_MetaData[] = {
		{ "ModuleRelativePath", "Public/AchievementSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAchievementSaveGame_Statics::NewProp_States = { "States", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSaveGame, States), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAchievementSaveGame_Statics::NewProp_States_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSaveGame_Statics::NewProp_States_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementSaveGame_Statics::NewProp_TotalUnlocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/AchievementSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAchievementSaveGame_Statics::NewProp_TotalUnlocked = { "TotalUnlocked", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementSaveGame, TotalUnlocked), METADATA_PARAMS(Z_Construct_UClass_UAchievementSaveGame_Statics::NewProp_TotalUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSaveGame_Statics::NewProp_TotalUnlocked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAchievementSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSaveGame_Statics::NewProp_States_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSaveGame_Statics::NewProp_States,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementSaveGame_Statics::NewProp_TotalUnlocked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAchievementSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAchievementSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAchievementSaveGame_Statics::ClassParams = {
		&UAchievementSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAchievementSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAchievementSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAchievementSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAchievementSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAchievementSaveGame, 3484879824);
	template<> ACHIEVEMENTSYSTEM_API UClass* StaticClass<UAchievementSaveGame>()
	{
		return UAchievementSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAchievementSaveGame(Z_Construct_UClass_UAchievementSaveGame, &UAchievementSaveGame::StaticClass, TEXT("/Script/AchievementSystem"), TEXT("UAchievementSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAchievementSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
