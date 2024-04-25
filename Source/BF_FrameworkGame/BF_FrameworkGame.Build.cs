using UnrealBuildTool;

public class BF_FrameworkGame : ModuleRules {
    public BF_FrameworkGame(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimationBudgetAllocator",
            "BF_Covers",
            "BF_FrameworkBase",
            "BF_Impacts",
            "BF_Input",
            "BF_Navigation",
            "BF_Pool",
            "BF_Rendering",
            "CableComponent",
            "CommonUI",
            "Common_Data",
            "Common_Utils",
            "Core",
            "CoreUObject",
            "CustomizableObject",
            "DeveloperSettings",
            "Engine",
            "GameplayAbilities",
            "GameplayTags",
            "IGS_UIFramework",
            "NavigationSystem",
            "Niagara",
            "PaybackDefinitions",
            "PhysicsCore",
            "SkinnedDecalComponent",
            "UMG",
        });
    }
}
