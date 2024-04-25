#include "IGS_AudioSubsystemDataAsset.h"

UIGS_AudioSubsystemDataAsset::UIGS_AudioSubsystemDataAsset() {
    this->MuteSoundsAkEvent = NULL;
    this->UnmuteSoundsAkEvent = NULL;
    this->StreamerModeOnAkState = NULL;
    this->StreamerModeOffAkState = NULL;
    this->DebugSoundsRtpc = NULL;
    this->MasterVolumeRtpc = NULL;
    this->SfxVolumeRtpc = NULL;
    this->DialogueVolumeRtpc = NULL;
    this->MusicVolumeRtpc = NULL;
    this->ControllerSpeakerVolumeRtpc = NULL;
    this->ControllerVibrationRtpc = NULL;
    this->RadioDialogueOutputRtpc = NULL;
    this->VoiceChatVolumeRtpc = NULL;
    this->VoiceChatEnabledAkEvent = NULL;
    this->VoiceChatDisabledAkEvent = NULL;
    this->AudioMixHeadphones = NULL;
    this->AudioMixSpeakers = NULL;
}


