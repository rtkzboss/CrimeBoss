using UnrealBuildTool;

public class BF_Impacts : ModuleRules {
    public BF_Impacts(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "BF_FrameworkBase",
            "BF_Pool",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "Niagara",
            "PaybackDefinitions",
            "PhysicsCore",
            "SkinnedDecalComponent",
        });
    }
}
