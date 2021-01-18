// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CW1Larmst201 : ModuleRules
{
	public CW1Larmst201(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
