#include "IGS_SoundSettings.h"

UIGS_SoundSettings::UIGS_SoundSettings() {
    this->bSettingsValid = true;
    this->MasterVolumeValue = 0.00f;
    this->SFXVolumeValue = 80.00f;
    this->MusicVolumeValue = 80.00f;
    this->DialogueVolumeValue = 80.00f;
    this->ControllerSpeakerVolumeValue = 80.00f;
    this->bAudioMixSpeakers = true;
    this->bSoundEnabledValue = true;
    this->bSoundInBackgroundEnabledValue = false;
    this->bStreamerModeValue = false;
    this->RadioDialogueOutputValue = 2;
    this->VoiceChatVolumeValue = 100.00f;
    this->bVoiceChatEnabledValue = false;
}

UIGS_SoundSettings* UIGS_SoundSettings::Instance() {
    return NULL;
}


