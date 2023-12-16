// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

[SupportedPlatforms(UnrealPlatformClass.Server)]
public class FactoryServerTarget : TargetRules
{
    public FactoryServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;
		BuildEnvironment = TargetBuildEnvironment.Shared;
		LinkType = TargetLinkType.Modular;
		CppStandard = CppStandardVersion.Cpp20;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.Add("FactoryGame");

        // bOverrideAppNameForSharedBuild = true; // TODO: Enable this after CSS does it too
		
		bUseChecksInShipping = true;
		bUseLoggingInShipping = true;

		WindowsPlatform.bEnableRayTracing = false;
		LinuxPlatform.bEnableRayTracing = false;
	}
}
