// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AshenCastle : ModuleRules
{
	public AshenCastle(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"NavigationSystem",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"Niagara",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"AshenCastle",
			"AshenCastle/Variant_Strategy",
			"AshenCastle/Variant_Strategy/UI",
			"AshenCastle/Variant_TwinStick",
			"AshenCastle/Variant_TwinStick/AI",
			"AshenCastle/Variant_TwinStick/Gameplay",
			"AshenCastle/Variant_TwinStick/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
