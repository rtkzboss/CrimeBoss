using UnrealBuildTool;

public class BF_Animations : ModuleRules {
    public BF_Animations(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "AnimationBudgetAllocator",
            "BF_FrameworkBase",
            "BF_FrameworkGame",
            "Common_Data",
            "ControlRig",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "Niagara",
            "NiagaraAnimNotifies",
            "PaybackDefinitions",
            "PhysXVehicles",
            "PhysicsCore",
        });
    }
}
