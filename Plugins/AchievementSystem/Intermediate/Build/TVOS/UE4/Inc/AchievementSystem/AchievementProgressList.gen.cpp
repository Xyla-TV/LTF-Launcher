// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AchievementSystem/Public/AchievementProgressList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementProgressList() {}
// Cross Module References
	ACHIEVEMENTSYSTEM_API UEnum* Z_Construct_UEnum_AchievementSystem_EAchievementProgressFilter();
	UPackage* Z_Construct_UPackage__Script_AchievementSystem();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementProgressList_NoRegister();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementProgressList();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementSubSystem_NoRegister();
	ACHIEVEMENTSYSTEM_API UClass* Z_Construct_UClass_UAchievementSystemSettings_NoRegister();
// End Cross Module References
	static UEnum* EAchievementProgressFilter_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AchievementSystem_EAchievementProgressFilter, Z_Construct_UPackage__Script_AchievementSystem(), TEXT("EAchievementProgressFilter"));
		}
		return Singleton;
	}
	template<> ACHIEVEMENTSYSTEM_API UEnum* StaticEnum<EAchievementProgressFilter>()
	{
		return EAchievementProgressFilter_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAchievementProgressFilter(EAchievementProgressFilter_StaticEnum, TEXT("/Script/AchievementSystem"), TEXT("EAchievementProgressFilter"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AchievementSystem_EAchievementProgressFilter_Hash() { return 3951551842U; }
	UEnum* Z_Construct_UEnum_AchievementSystem_EAchievementProgressFilter()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AchievementSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAchievementProgressFilter"), 0, Get_Z_Construct_UEnum_AchievementSystem_EAchievementProgressFilter_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAchievementProgressFilter::ANY", (int64)EAchievementProgressFilter::ANY },
				{ "EAchievementProgressFilter::ACHIEVED", (int64)EAchievementProgressFilter::ACHIEVED },
				{ "EAchievementProgressFilter::UNACHIEVED", (int64)EAchievementProgressFilter::UNACHIEVED },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ACHIEVED.DisplayName", "Achieved Only" },
				{ "ACHIEVED.Name", "EAchievementProgressFilter::ACHIEVED" },
				{ "ANY.DisplayName", "Show All" },
				{ "ANY.Name", "EAchievementProgressFilter::ANY" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/AchievementProgressList.h" },
				{ "UNACHIEVED.DisplayName", "Unachieved Only" },
				{ "UNACHIEVED.Name", "EAchievementProgressFilter::UNACHIEVED" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AchievementSystem,
				nullptr,
				"EAchievementProgressFilter",
				"EAchievementProgressFilter",
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
	DEFINE_FUNCTION(UAchievementProgressList::execUpdateList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateList();
		P_NATIVE_END;
	}
	void UAchievementProgressList::StaticRegisterNativesUAchievementProgressList()
	{
		UClass* Class = UAchievementProgressList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateList", &UAchievementProgressList::execUpdateList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAchievementProgressList_UpdateList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementProgressList_UpdateList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Achievement Progress List" },
		{ "ModuleRelativePath", "Public/AchievementProgressList.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementProgressList_UpdateList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementProgressList, nullptr, "UpdateList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementProgressList_UpdateList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementProgressList_UpdateList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementProgressList_UpdateList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementProgressList_UpdateList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAchievementProgressList_NoRegister()
	{
		return UAchievementProgressList::StaticClass();
	}
	struct Z_Construct_UClass_UAchievementProgressList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Filter_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Filter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowHiddenAchievementCount_MetaData[];
#endif
		static void NewProp_bShowHiddenAchievementCount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowHiddenAchievementCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HiddenText;
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
	UObject* (*const Z_Construct_UClass_UAchievementProgressList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AchievementSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAchievementProgressList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAchievementProgressList_UpdateList, "UpdateList" }, // 2930336618
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementProgressList_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AchievementProgressList.h" },
		{ "ModuleRelativePath", "Public/AchievementProgressList.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_Filter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Details" },
		{ "Comment", "/**Change the type of achievements to show. Must all UpdateList() after changing is done at runtime*/" },
		{ "ModuleRelativePath", "Public/AchievementProgressList.h" },
		{ "ToolTip", "Change the type of achievements to show. Must all UpdateList() after changing is done at runtime" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementProgressList, Filter), Z_Construct_UEnum_AchievementSystem_EAchievementProgressFilter, METADATA_PARAMS(Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_Filter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_bShowHiddenAchievementCount_MetaData[] = {
		{ "Category", "Details" },
		{ "ModuleRelativePath", "Public/AchievementProgressList.h" },
	};
#endif
	void Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_bShowHiddenAchievementCount_SetBit(void* Obj)
	{
		((UAchievementProgressList*)Obj)->bShowHiddenAchievementCount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_bShowHiddenAchievementCount = { "bShowHiddenAchievementCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAchievementProgressList), &Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_bShowHiddenAchievementCount_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_bShowHiddenAchievementCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_bShowHiddenAchievementCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_ListView_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AchievementProgressList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_ListView = { "ListView", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementProgressList, ListView), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_ListView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_ListView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_HiddenText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AchievementProgressList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_HiddenText = { "HiddenText", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementProgressList, HiddenText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_HiddenText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_HiddenText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_SubSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/AchievementProgressList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_SubSystem = { "SubSystem", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementProgressList, SubSystem), Z_Construct_UClass_UAchievementSubSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_SubSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_SubSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AchievementProgressList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementProgressList, Settings), Z_Construct_UClass_UAchievementSystemSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAchievementProgressList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_Filter_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_bShowHiddenAchievementCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_ListView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_HiddenText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_SubSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementProgressList_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAchievementProgressList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAchievementProgressList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAchievementProgressList_Statics::ClassParams = {
		&UAchievementProgressList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAchievementProgressList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressList_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAchievementProgressList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementProgressList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAchievementProgressList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAchievementProgressList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAchievementProgressList, 492112376);
	template<> ACHIEVEMENTSYSTEM_API UClass* StaticClass<UAchievementProgressList>()
	{
		return UAchievementProgressList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAchievementProgressList(Z_Construct_UClass_UAchievementProgressList, &UAchievementProgressList::StaticClass, TEXT("/Script/AchievementSystem"), TEXT("UAchievementProgressList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAchievementProgressList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
