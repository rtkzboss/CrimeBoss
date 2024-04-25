using UnrealBuildTool;

public class BF_Covers : ModuleRules {
    public BF_Covers(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "CoverGenerator",
            "Engine",
            "NavigationSystem",
        });
    }
}
