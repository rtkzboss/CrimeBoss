using UnrealBuildTool;

public class Common_Save : ModuleRules {
    public Common_Save(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Common_Data",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "PaybackDefinitions",
        });
    }
}
