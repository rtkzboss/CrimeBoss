using UnrealBuildTool;

public class CustomizableObject : ModuleRules {
    public CustomizableObject(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "ClothingSystemRuntimeCommon",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
