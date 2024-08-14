using UnrealBuildTool;

public class CrimeBossEditorTarget : TargetRules {
	public CrimeBossEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"BF_AI",
			"BF_Analytics",
			"BF_Animations",
			"BF_Audio",
			"BF_AudioBase",
			"BF_Covers",
			"BF_Debug",
			"BF_FrameworkBase",
			"BF_FrameworkGame",
			"BF_GUI",
			"BF_GUIBase",
			"BF_Impacts",
			"BF_Input",
			"BF_LevelGenerator",
			"BF_Loading",
			"BF_Navigation",
			"BF_Network",
			"BF_Pool",
			"BF_Props",
			"BF_Rendering",
			"BF_RideableVehicles",
			"BF_Settings",
			"BF_Voiceover",
			"Common_Data",
			"Common_Save",
			"Common_Utils",
			"CrimeBossMeta",
			"IGS_UIFramework",
			"Payback",
			"PaybackDefinitions",
			"PS5AudioFeatures",
			"StreamlineBlueprint",
			"StreamlineRHI",
		});
	}
}
