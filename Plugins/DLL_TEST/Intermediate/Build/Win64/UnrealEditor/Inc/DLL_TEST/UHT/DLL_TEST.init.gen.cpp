// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDLL_Test_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DLL_Test;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DLL_Test()
	{
		if (!Z_Registration_Info_UPackage__Script_DLL_Test.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DLL_Test",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x9EDD3FEB,
				0xA5D9D860,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DLL_Test.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DLL_Test.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DLL_Test(Z_Construct_UPackage__Script_DLL_Test, TEXT("/Script/DLL_Test"), Z_Registration_Info_UPackage__Script_DLL_Test, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9EDD3FEB, 0xA5D9D860));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
