// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChainsawGirlMock/ChainsawGirlMockGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainsawGirlMockGameModeBase() {}
// Cross Module References
	CHAINSAWGIRLMOCK_API UClass* Z_Construct_UClass_AChainsawGirlMockGameModeBase_NoRegister();
	CHAINSAWGIRLMOCK_API UClass* Z_Construct_UClass_AChainsawGirlMockGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ChainsawGirlMock();
// End Cross Module References
	void AChainsawGirlMockGameModeBase::StaticRegisterNativesAChainsawGirlMockGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AChainsawGirlMockGameModeBase_NoRegister()
	{
		return AChainsawGirlMockGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AChainsawGirlMockGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChainsawGirlMockGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ChainsawGirlMock,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsawGirlMockGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ChainsawGirlMockGameModeBase.h" },
		{ "ModuleRelativePath", "ChainsawGirlMockGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChainsawGirlMockGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChainsawGirlMockGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChainsawGirlMockGameModeBase_Statics::ClassParams = {
		&AChainsawGirlMockGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AChainsawGirlMockGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChainsawGirlMockGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChainsawGirlMockGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChainsawGirlMockGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChainsawGirlMockGameModeBase, 1341137893);
	template<> CHAINSAWGIRLMOCK_API UClass* StaticClass<AChainsawGirlMockGameModeBase>()
	{
		return AChainsawGirlMockGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChainsawGirlMockGameModeBase(Z_Construct_UClass_AChainsawGirlMockGameModeBase, &AChainsawGirlMockGameModeBase::StaticClass, TEXT("/Script/ChainsawGirlMock"), TEXT("AChainsawGirlMockGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChainsawGirlMockGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
