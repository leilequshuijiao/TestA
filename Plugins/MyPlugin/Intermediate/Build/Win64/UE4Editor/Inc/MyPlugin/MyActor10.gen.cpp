// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPlugin/Public/MyActor10.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActor10() {}
// Cross Module References
	MYPLUGIN_API UClass* Z_Construct_UClass_AMyActor10_NoRegister();
	MYPLUGIN_API UClass* Z_Construct_UClass_AMyActor10();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyPlugin();
// End Cross Module References
	DEFINE_FUNCTION(AMyActor10::execPrf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Prf();
		P_NATIVE_END;
	}
	void AMyActor10::StaticRegisterNativesAMyActor10()
	{
		UClass* Class = AMyActor10::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Prf", &AMyActor10::execPrf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyActor10_Prf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyActor10_Prf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyActor10.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyActor10_Prf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyActor10, nullptr, "Prf", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyActor10_Prf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyActor10_Prf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyActor10_Prf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyActor10_Prf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyActor10_NoRegister()
	{
		return AMyActor10::StaticClass();
	}
	struct Z_Construct_UClass_AMyActor10_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyActor10_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyActor10_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyActor10_Prf, "Prf" }, // 3483542146
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyActor10_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyActor10.h" },
		{ "ModuleRelativePath", "Public/MyActor10.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyActor10_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyActor10>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyActor10_Statics::ClassParams = {
		&AMyActor10::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyActor10_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyActor10_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyActor10()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyActor10_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyActor10, 3732709242);
	template<> MYPLUGIN_API UClass* StaticClass<AMyActor10>()
	{
		return AMyActor10::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyActor10(Z_Construct_UClass_AMyActor10, &AMyActor10::StaticClass, TEXT("/Script/MyPlugin"), TEXT("AMyActor10"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyActor10);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
