#include "AkSettings.h"

UAkSettings::UAkSettings() {
    (*this).MaxSimultaneousReverbVolumes = 4;
    (*this).WwiseProjectPath.FilePath = TEXT("../payback-wwise/PayBack_WwiseProject.wproj");
    (*this).WwiseSoundDataFolder.Path = TEXT("WwiseAudio/GeneratedSoundData/SoundBanks");
    (*this).DefaultOcclusionCollisionChannel = ECC_GameTraceChannel8;
    (*this).GlobalDecayAbsorption = 5.000000000e-01f;
    (*this).UseEventBasedPackaging = true;
    (*this).CommandletCommitMessage = TEXT("Unreal Wwise Sound Data auto-generation");
    (*this).AskedToUseNewAssetManagement = true;
    (*this).MigratedEnableMultiCoreRendering = true;
}


