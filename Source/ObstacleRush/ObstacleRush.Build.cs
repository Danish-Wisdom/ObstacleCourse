// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ObstacleRush : ModuleRules
{
	public ObstacleRush(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
