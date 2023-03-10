// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TPMPIA2 : ModuleRules
{
	public TPMPIA2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule", "Niagara","GameplayTags","Slate","SlateCore" });
    }
}
