// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TestPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TestPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_TestPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TestPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x045AE3AC,
				0xA49B4DE5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TestPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TestPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TestPlugin(Z_Construct_UPackage__Script_TestPlugin, TEXT("/Script/TestPlugin"), Z_Registration_Info_UPackage__Script_TestPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x045AE3AC, 0xA49B4DE5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
