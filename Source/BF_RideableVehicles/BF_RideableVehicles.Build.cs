using UnrealBuildTool;

public class BF_RideableVehicles : ModuleRules {
    public BF_RideableVehicles(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "BF_FrameworkBase",
            "BF_FrameworkGame",
            "Core",
            "CoreUObject",
            "Engine",
            "PhysXVehicles",
            "PhysicsCore",
            "UMG",
            "Water",
        });
    }
}
