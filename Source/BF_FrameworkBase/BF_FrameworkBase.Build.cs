using UnrealBuildTool;

public class BF_FrameworkBase : ModuleRules {
    public BF_FrameworkBase(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;

        PrivateDependencyModuleNames.AddRange(new string[] {
            "InputCore",
            "OnlineSubsystem",
        });
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AdvancedSessions",
            "AkAudio",
            "AnimationBudgetAllocator",
            "BF_Loading",
            "Common_Data",
            "Common_Save",
            "Common_Utils",
            "Core",
            "CoreUObject",
            "DataRegistry",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "HeatMapsRuntime",
            "Landscape",
            "NavigationSystem",
            "OnlineSubsystemUtils",
            "PathFollow",
            "PaybackDefinitions",
            "PhysicsCore",
            "SkinnedDecalComponent",
            "UMG",
        });
    }
}
