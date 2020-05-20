// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Section_01/Section_01GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSection_01GameMode() {}
// Cross Module References
	SECTION_01_API UClass* Z_Construct_UClass_ASection_01GameMode_NoRegister();
	SECTION_01_API UClass* Z_Construct_UClass_ASection_01GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_Section_01();
// End Cross Module References
	void ASection_01GameMode::StaticRegisterNativesASection_01GameMode()
	{
	}
	UClass* Z_Construct_UClass_ASection_01GameMode_NoRegister()
	{
		return ASection_01GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASection_01GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASection_01GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Section_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASection_01GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Section_01GameMode.h" },
		{ "ModuleRelativePath", "Section_01GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASection_01GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASection_01GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASection_01GameMode_Statics::ClassParams = {
		&ASection_01GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASection_01GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASection_01GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASection_01GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASection_01GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASection_01GameMode, 3598270895);
	template<> SECTION_01_API UClass* StaticClass<ASection_01GameMode>()
	{
		return ASection_01GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASection_01GameMode(Z_Construct_UClass_ASection_01GameMode, &ASection_01GameMode::StaticClass, TEXT("/Script/Section_01"), TEXT("ASection_01GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASection_01GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
