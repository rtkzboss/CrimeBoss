#include "IGS_SoundSettings.h"

UIGS_SoundSettings::UIGS_SoundSettings() {
    (*this).MasterVolumeValue = 1.000000000e+02f;
    (*this).SFXVolumeValue = 8.000000000e+01f;
    (*this).DialogueVolumeValue = 8.000000000e+01f;
    (*this).ControllerSpeakerVolumeValue = 8.000000000e+01f;
    (*this).bAudioMixSpeakers = true;
    (*this).bSoundEnabledValue = true;
    (*this).RadioDialogueOutputValue = 2;
    (*this).VoiceChatVolumeValue = 1.000000000e+02f;
    (*this).bSettingsValid = true;
}

UIGS_SoundSettings* UIGS_SoundSettings::Instance() {
    return NULL;
}


