// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDLL_TEST_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DLL_TEST;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DLL_TEST()
	{
		if (!Z_Registration_Info_UPackage__Script_DLL_TEST.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DLL_TEST",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x5D3D58F3,
				0xBBB4F2DA,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DLL_TEST.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DLL_TEST.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DLL_TEST(Z_Construct_UPackage__Script_DLL_TEST, TEXT("/Script/DLL_TEST"), Z_Registration_Info_UPackage__Script_DLL_TEST, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5D3D58F3, 0xBBB4F2DA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
