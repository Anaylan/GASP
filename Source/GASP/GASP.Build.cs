// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GASP : ModuleRules
{
	public GASP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(new string[] { "Core" });
		
		PrivateDependencyModuleNames.AddRange(new string[] { "CoreUObject", "Engine", "MotionTrajectory", 
			"PoseSearch", "Chooser", "AnimationWarpingRuntime", "BlendStack" });
	}
}