#include "IGS_SoundSettings.h"

UIGS_SoundSettings::UIGS_SoundSettings() {
    (*this).SFXVolumeValue = 1.000000000e+02f;
    (*this).DialogueVolumeValue = 1.000000000e+02f;
    (*this).ControllerSpeakerVolumeValue = 8.000000000e+01f;
    (*this).LastInputDevice = TEXT("Default device");
    (*this).LastOutputDevice = TEXT("Default Device");
    (*this).bStreamerModeValue = true;
    (*this).RadioDialogueOutputValue = 2;
    (*this).VoiceChatVolumeValue = 1.000000000e+02f;
    (*this).bSettingsValid = true;
}

UIGS_SoundSettings* UIGS_SoundSettings::Instance() {
    return NULL;
}


