using UnrealBuildTool;

public class AdvancedSteamSessions : ModuleRules {
    public AdvancedSteamSessions(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AdvancedSessions",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
