// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPL_Plugin/Public/WrapperObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrapperObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TPL_PLUGIN_API UClass* Z_Construct_UClass_UWrapperObject();
	TPL_PLUGIN_API UClass* Z_Construct_UClass_UWrapperObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TPL_Plugin();
// End Cross Module References
	DEFINE_FUNCTION(UWrapperObject::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	void UWrapperObject::StaticRegisterNativesUWrapperObject()
	{
		UClass* Class = UWrapperObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetName", &UWrapperObject::execGetName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWrapperObject_GetName_Statics
	{
		struct WrapperObject_eventGetName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWrapperObject_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WrapperObject_eventGetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapperObject_GetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapperObject_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapperObject_GetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wrapping" },
		{ "ModuleRelativePath", "Public/WrapperObject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapperObject_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapperObject, nullptr, "GetName", nullptr, nullptr, Z_Construct_UFunction_UWrapperObject_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapperObject_GetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWrapperObject_GetName_Statics::WrapperObject_eventGetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapperObject_GetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWrapperObject_GetName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapperObject_GetName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UWrapperObject_GetName_Statics::WrapperObject_eventGetName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UWrapperObject_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWrapperObject_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWrapperObject);
	UClass* Z_Construct_UClass_UWrapperObject_NoRegister()
	{
		return UWrapperObject::StaticClass();
	}
	struct Z_Construct_UClass_UWrapperObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWrapperObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TPL_Plugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWrapperObject_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UWrapperObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWrapperObject_GetName, "GetName" }, // 3709376535
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWrapperObject_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapperObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WrapperObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WrapperObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWrapperObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWrapperObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWrapperObject_Statics::ClassParams = {
		&UWrapperObject::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWrapperObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UWrapperObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UWrapperObject()
	{
		if (!Z_Registration_Info_UClass_UWrapperObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWrapperObject.OuterSingleton, Z_Construct_UClass_UWrapperObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWrapperObject.OuterSingleton;
	}
	template<> TPL_PLUGIN_API UClass* StaticClass<UWrapperObject>()
	{
		return UWrapperObject::StaticClass();
	}
	UWrapperObject::UWrapperObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWrapperObject);
	UWrapperObject::~UWrapperObject() {}
	struct Z_CompiledInDeferFile_FID_Github_Unreal_Beginner_Course_Plugins_TPL_Plugin_Source_TPL_Plugin_Public_WrapperObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Beginner_Course_Plugins_TPL_Plugin_Source_TPL_Plugin_Public_WrapperObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWrapperObject, UWrapperObject::StaticClass, TEXT("UWrapperObject"), &Z_Registration_Info_UClass_UWrapperObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWrapperObject), 4104280562U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_Unreal_Beginner_Course_Plugins_TPL_Plugin_Source_TPL_Plugin_Public_WrapperObject_h_2625921955(TEXT("/Script/TPL_Plugin"),
		Z_CompiledInDeferFile_FID_Github_Unreal_Beginner_Course_Plugins_TPL_Plugin_Source_TPL_Plugin_Public_WrapperObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_Unreal_Beginner_Course_Plugins_TPL_Plugin_Source_TPL_Plugin_Public_WrapperObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
