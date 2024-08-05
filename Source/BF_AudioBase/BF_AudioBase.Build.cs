using UnrealBuildTool;

public class BF_AudioBase : ModuleRules {
    public BF_AudioBase(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "BF_FrameworkBase",
            "Common_Utils",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "PaybackDefinitions",
        });
    }
}
