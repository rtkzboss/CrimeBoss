using UnrealBuildTool;

public class PowerIKRuntime : ModuleRules {
    public PowerIKRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;

        PrivateDependencyModuleNames.AddRange(new string[] {
            "RigVM",
        });
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "ControlRig",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
