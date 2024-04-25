using UnrealBuildTool;

public class BF_LevelGenerator : ModuleRules {
    public BF_LevelGenerator(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BF_FrameworkBase",
            "BF_FrameworkGame",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "NavigationSystem",
            "PaybackDefinitions",
        });
    }
}
