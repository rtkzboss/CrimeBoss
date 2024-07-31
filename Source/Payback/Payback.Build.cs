using UnrealBuildTool;

public class Payback : ModuleRules {
    public Payback(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;

        PrivateDependencyModuleNames.AddRange(new string[] {
            "OnlineSubsystem",
            "CommonUI",
            "SimpleUGC",
        });
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "BF_AI",
            "BF_Debug",
            "BF_FrameworkBase",
            "BF_FrameworkGame",
            "BF_Network",
            "BF_Voiceover",
            "BinkMediaPlayer",
            "CinematicCamera",
            "Common_Data",
            "Common_Save",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "IGS_UIFramework",
            "LevelSequence",
            "OnlineSubsystemUtils",
            "PaybackDefinitions",
            "PhysicsCore",
            "SlateCore",
            "UMG",
        });
    }
}
