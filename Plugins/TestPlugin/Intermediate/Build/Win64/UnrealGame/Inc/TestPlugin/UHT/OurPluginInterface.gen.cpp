// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestPlugin/Public/OurPluginInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOurPluginInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TESTPLUGIN_API UClass* Z_Construct_UClass_UOurPluginInterface();
	TESTPLUGIN_API UClass* Z_Construct_UClass_UOurPluginInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TestPlugin();
// End Cross Module References
	void IOurPluginInterface::TestFunction()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TestFunction instead.");
	}
	void UOurPluginInterface::StaticRegisterNativesUOurPluginInterface()
	{
	}
	struct Z_Construct_UFunction_UOurPluginInterface_TestFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOurPluginInterface_TestFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OurPluginInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOurPluginInterface_TestFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOurPluginInterface, nullptr, "TestFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOurPluginInterface_TestFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOurPluginInterface_TestFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOurPluginInterface_TestFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOurPluginInterface_TestFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOurPluginInterface);
	UClass* Z_Construct_UClass_UOurPluginInterface_NoRegister()
	{
		return UOurPluginInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOurPluginInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOurPluginInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TestPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOurPluginInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOurPluginInterface_TestFunction, "TestFunction" }, // 2006934182
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOurPluginInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OurPluginInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOurPluginInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOurPluginInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOurPluginInterface_Statics::ClassParams = {
		&UOurPluginInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOurPluginInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOurPluginInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOurPluginInterface()
	{
		if (!Z_Registration_Info_UClass_UOurPluginInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOurPluginInterface.OuterSingleton, Z_Construct_UClass_UOurPluginInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOurPluginInterface.OuterSingleton;
	}
	template<> TESTPLUGIN_API UClass* StaticClass<UOurPluginInterface>()
	{
		return UOurPluginInterface::StaticClass();
	}
	UOurPluginInterface::UOurPluginInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOurPluginInterface);
	UOurPluginInterface::~UOurPluginInterface() {}
	static FName NAME_UOurPluginInterface_TestFunction = FName(TEXT("TestFunction"));
	void IOurPluginInterface::Execute_TestFunction(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOurPluginInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UOurPluginInterface_TestFunction);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	struct Z_CompiledInDeferFile_FID_unreal_bu_BeginnerCourse_5_21_Plugins_TestPlugin_Source_TestPlugin_Public_OurPluginInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_bu_BeginnerCourse_5_21_Plugins_TestPlugin_Source_TestPlugin_Public_OurPluginInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOurPluginInterface, UOurPluginInterface::StaticClass, TEXT("UOurPluginInterface"), &Z_Registration_Info_UClass_UOurPluginInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOurPluginInterface), 1536591777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_bu_BeginnerCourse_5_21_Plugins_TestPlugin_Source_TestPlugin_Public_OurPluginInterface_h_1910910563(TEXT("/Script/TestPlugin"),
		Z_CompiledInDeferFile_FID_unreal_bu_BeginnerCourse_5_21_Plugins_TestPlugin_Source_TestPlugin_Public_OurPluginInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_bu_BeginnerCourse_5_21_Plugins_TestPlugin_Source_TestPlugin_Public_OurPluginInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
