using UnrealBuildTool;

public class BF_Audio : ModuleRules {
    public BF_Audio(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "BF_AudioBase",
            "BF_Loading",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "PaybackDefinitions",
        });
    }
}
