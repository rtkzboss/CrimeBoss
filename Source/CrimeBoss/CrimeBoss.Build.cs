using UnrealBuildTool;

public class CrimeBoss : ModuleRules {
    public CrimeBoss(ReadOnlyTargetRules Target) : base(Target) {
        PrivateDependencyModuleNames.AddRange(new string[] {"Core"});
    }
}
