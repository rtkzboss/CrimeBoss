using UnrealBuildTool;

public class BF_AI : ModuleRules {
    public BF_AI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimationBudgetAllocator",
            "BF_Covers",
            "BF_FrameworkBase",
            "BF_FrameworkGame",
            "BF_Navigation",
            "BF_Network",
            "BF_Pool",
            "Common_Data",
            "Common_Utils",
            "Core",
            "CoreUObject",
            "CoverGenerator",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "NavigationSystem",
            "Niagara",
            "PathFollow",
            "PaybackDefinitions",
            "PhysXVehicles",
            "Water",
        });
    }
}
