#include "IGS_AudioDevSettings.h"

UIGS_AudioDevSettings::UIGS_AudioDevSettings() {
    (*this).MusicSubsystemDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Audio/DA_MusicSubsystem.DA_MusicSubsystem"), TEXT(""));
    (*this).AudioSubsystemDataAsset = FSoftObjectPath(TEXT("/Game/00_Main/Audio/DA_AudioSubsystem.DA_AudioSubsystem"), TEXT(""));
}


