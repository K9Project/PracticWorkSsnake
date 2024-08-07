// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PracticWorkSsnake/PracticWorkSsnakeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePracticWorkSsnakeGameModeBase() {}
// Cross Module References
	PRACTICWORKSSNAKE_API UClass* Z_Construct_UClass_APracticWorkSsnakeGameModeBase_NoRegister();
	PRACTICWORKSSNAKE_API UClass* Z_Construct_UClass_APracticWorkSsnakeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PracticWorkSsnake();
// End Cross Module References
	void APracticWorkSsnakeGameModeBase::StaticRegisterNativesAPracticWorkSsnakeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APracticWorkSsnakeGameModeBase_NoRegister()
	{
		return APracticWorkSsnakeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_APracticWorkSsnakeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APracticWorkSsnakeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PracticWorkSsnake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APracticWorkSsnakeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PracticWorkSsnakeGameModeBase.h" },
		{ "ModuleRelativePath", "PracticWorkSsnakeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APracticWorkSsnakeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APracticWorkSsnakeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APracticWorkSsnakeGameModeBase_Statics::ClassParams = {
		&APracticWorkSsnakeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APracticWorkSsnakeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APracticWorkSsnakeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APracticWorkSsnakeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APracticWorkSsnakeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APracticWorkSsnakeGameModeBase, 1595940472);
	template<> PRACTICWORKSSNAKE_API UClass* StaticClass<APracticWorkSsnakeGameModeBase>()
	{
		return APracticWorkSsnakeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APracticWorkSsnakeGameModeBase(Z_Construct_UClass_APracticWorkSsnakeGameModeBase, &APracticWorkSsnakeGameModeBase::StaticClass, TEXT("/Script/PracticWorkSsnake"), TEXT("APracticWorkSsnakeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APracticWorkSsnakeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
