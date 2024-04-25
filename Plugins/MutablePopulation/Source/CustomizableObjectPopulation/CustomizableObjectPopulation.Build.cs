using UnrealBuildTool;

public class CustomizableObjectPopulation : ModuleRules {
    public CustomizableObjectPopulation(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "CustomizableObject",
            "Engine",
        });
    }
}
