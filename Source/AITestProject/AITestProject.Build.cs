// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AITestProject : ModuleRules
{
	public AITestProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
