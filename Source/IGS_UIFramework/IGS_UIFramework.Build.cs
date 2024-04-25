using UnrealBuildTool;

public class IGS_UIFramework : ModuleRules {
    public IGS_UIFramework(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BF_Input",
            "CommonUI",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "SlateCore",
        });
    }
}
