using UnrealBuildTool;

public class BF_Debug : ModuleRules {
    public BF_Debug(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "PaybackDefinitions",
            "PhysicsCore",
            "UMG",
        });
    }
}
