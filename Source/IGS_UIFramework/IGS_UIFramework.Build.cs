using UnrealBuildTool;

public class IGS_UIFramework : ModuleRules {
    public IGS_UIFramework(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;

        PrivateDependencyModuleNames.AddRange(new string[] {
            "InputCore",
            "UMG",
        });
        PublicDependencyModuleNames.AddRange(new string[] {
            "BF_Input",
            "CommonUI",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "SlateCore",
            "UMG",
        });
    }
}
