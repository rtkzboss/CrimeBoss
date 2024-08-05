using UnrealBuildTool;

public class BF_Navigation : ModuleRules {
    public BF_Navigation(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BF_FrameworkBase",
            "Core",
            "CoreUObject",
            "Engine",
            "NavigationSystem",
        });
    }
}
