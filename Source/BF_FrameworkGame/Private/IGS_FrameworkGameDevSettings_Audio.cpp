#include "IGS_FrameworkGameDevSettings_Audio.h"

UIGS_FrameworkGameDevSettings_Audio::UIGS_FrameworkGameDevSettings_Audio() {
    (*this).ShootStartAudioEvent = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_LoopStart.AKE_WeaponFire_LoopStart"), TEXT(""));
    (*this).ShootStopAudioEvent = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_LoopBreak.AKE_WeaponFire_LoopBreak"), TEXT(""));
    (*this).ShootBurst2AudioEvent = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_Burst2.AKE_WeaponFire_Burst2"), TEXT(""));
    (*this).ShootBurst3AudioEvent = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_Burst3.AKE_WeaponFire_Burst3"), TEXT(""));
    (*this).ShootSingleAudioEvent = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_Single.AKE_WeaponFire_Single"), TEXT(""));
    (*this).ShootEmptyAudioEvent = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponFire_Empty.AKE_WeaponFire_Empty"), TEXT(""));
    (*this).NormalStateAkSwitch = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Weapons/SwitchGrp_WeaponState/SwitchGrp_WeaponState-Switch_Normal.SwitchGrp_WeaponState-Switch_Normal"), TEXT(""));
    (*this).SuppressedStateAkSwitch = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Weapons/SwitchGrp_WeaponState/SwitchGrp_WeaponState-Switch_Suppressed.SwitchGrp_WeaponState-Switch_Suppressed"), TEXT(""));
    (*this).NormalFireModeStateAkSwitch = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Weapons/SwitchGrp_WeaponFireMode/SwitchGrp_WeaponFireMode-Switch_Normal.SwitchGrp_WeaponFireMode-Switch_Normal"), TEXT(""));
    (*this).ExtraFireModeStateAkSwitch = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Weapons/SwitchGrp_WeaponFireMode/SwitchGrp_WeaponFireMode-Switch_Extra.SwitchGrp_WeaponFireMode-Switch_Extra"), TEXT(""));
    (*this).WeaponFireRateRtpc = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Game_Parameters/Default_Work_Unit/WU_Weapons/RTPC_WeaponFireRate.RTPC_WeaponFireRate"), TEXT(""));
    (*this).WeaponRoundsLeftRtpc = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Game_Parameters/Default_Work_Unit/WU_Weapons/RTPC_WeaponRoundsLeft.RTPC_WeaponRoundsLeft"), TEXT(""));
    (*this).WeaponAimDownSightRtpc = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Game_Parameters/Default_Work_Unit/WU_Weapons/RTPC_WeaponAimDownSight.RTPC_WeaponAimDownSight"), TEXT(""));
    (*this).WeaponAimSightsAudioEvent = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponAim_Sights.AKE_WeaponAim_Sights"), TEXT(""));
    (*this).WeaponAimHipAudioEvent = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_WeaponAim_Hip.AKE_WeaponAim_Hip"), TEXT(""));
    (*this).IndoorsVolumeAkSwitch = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Environment/SwitchGrp_EnviroSpace/SwitchGrp_EnviroSpace-Switch_Indoors.SwitchGrp_EnviroSpace-Switch_Indoors"), TEXT(""));
    (*this).OutdoorsVolumeAkSwitch = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Environment/SwitchGrp_EnviroSpace/SwitchGrp_EnviroSpace-Switch_Outdoors.SwitchGrp_EnviroSpace-Switch_Outdoors"), TEXT(""));
    (*this).PingGenericAudioEvent = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_GUI/Ping/AKE_Ping_Highlight_Generic.AKE_Ping_Highlight_Generic"), TEXT(""));
    (*this).PingDangerousAudioEvent = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_GUI/Ping/AKE_Ping_Highlight_Dangerous.AKE_Ping_Highlight_Dangerous"), TEXT(""));
    (*this).KeycardDrop = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_SFX/WU_SFX_Interactables/Keycard/AKE_Keycard_Drop.AKE_Keycard_Drop"), TEXT(""));
}


