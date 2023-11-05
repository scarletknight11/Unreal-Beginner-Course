// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BeginnerCourse : ModuleRules
{
	public BeginnerCourse(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "HTTP", "Json", "JsonUtilities", "Sockets", "WebSockets", "Networking" , "EnhancedInput", "TestPlugin" });

		PrivateDependencyModuleNames.AddRange(new string[] { "Json", "JsonUtilities" });

        PrivateDependencyModuleNames.Add("HTTP");

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
