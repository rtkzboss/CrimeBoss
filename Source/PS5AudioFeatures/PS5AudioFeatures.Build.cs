using UnrealBuildTool;

public class PS5AudioFeatures : ModuleRules {
    public PS5AudioFeatures(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioExtensions",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
