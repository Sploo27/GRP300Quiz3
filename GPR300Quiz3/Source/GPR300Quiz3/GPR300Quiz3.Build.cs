// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GPR300Quiz3 : ModuleRules
{
	public GPR300Quiz3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
