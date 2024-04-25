using UnrealBuildTool;

public class BF_GUIBase : ModuleRules {
    public BF_GUIBase(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BF_Input",
            "Core",
            "CoreUObject",
            "Engine",
            "SlateCore",
            "UMG",
        });
    }
}
