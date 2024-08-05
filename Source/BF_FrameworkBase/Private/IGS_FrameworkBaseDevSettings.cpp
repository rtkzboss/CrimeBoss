#include "IGS_FrameworkBaseDevSettings.h"

UIGS_FrameworkBaseDevSettings::UIGS_FrameworkBaseDevSettings() {
    (*this).FootstepNoneAkSwitch = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Switches/Default_Work_Unit/WU_Characters/SwitchGrp_FootstepSpecial/SwitchGrp_FootstepSpecial-Switch_None.SwitchGrp_FootstepSpecial-Switch_None"), TEXT(""));
    (*this).DeathAkEvent = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_SFX/WU_SFX_Common/AKE_Swat_DeathScream.AKE_Swat_DeathScream"), TEXT(""));
    (*this).StopInspectAkEvent = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_Weapons/WU_Weapons_Ranged/AKE_Weapon_Inspect_Stop.AKE_Weapon_Inspect_Stop"), TEXT(""));
    (*this).WieldableMPCPath = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/Common/MPC_GlobalsCharactersWeapons.MPC_GlobalsCharactersWeapons"), TEXT(""));
    (*this).MoveSpeedGameplayEffect = FSoftObjectPath(TEXT("/Game/00_Main/GameplayAbilitySystem/Effects/GE_MoveSpeedMultiplier.GE_MoveSpeedMultiplier_C"), TEXT(""));
    (*this).DefaultCharacterAttributes = FSoftObjectPath(TEXT("/Game/00_Main/GameplayAbilitySystem/Attributes/DA_DefaultCharacterAttributes.DA_DefaultCharacterAttributes"), TEXT(""));
    (*this).DefaultGlobalAttributes = FSoftObjectPath(TEXT("/Game/00_Main/GameplayAbilitySystem/Attributes/DA_DefaultGlobalAttributes.DA_DefaultGlobalAttributes"), TEXT(""));
    (*this).UnlockManagerData = FSoftObjectPath(TEXT("/Game/00_Main/Core/MainMenu/Data/DA_UnlockManagerData.DA_UnlockManagerData"), TEXT(""));
    (*this).ProgressionManagerData = FSoftObjectPath(TEXT("/Game/00_Main/Core/MainMenu/Data/DA_ProgressionManagerData.DA_ProgressionManagerData"), TEXT(""));
}


