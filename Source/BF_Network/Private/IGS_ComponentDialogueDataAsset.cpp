#include "IGS_ComponentDialogueDataAsset.h"

UIGS_ComponentDialogueDataAsset::UIGS_ComponentDialogueDataAsset() {
    this->PlayVoiceAkEvent = NULL;
    this->FinishVoiceAkEvent = NULL;
    this->PlayVoiceExtraAkEvent = NULL;
    this->FinishVoiceExtraAkEvent = NULL;
    this->AkSwitchPriorityHigh = NULL;
    this->AkSwitchPriorityLow = NULL;
    this->Ak2DModeRtpc = NULL;
    this->AkRtpcVoSpatialization = NULL;
    this->DistanceRtpc = NULL;
    this->ObstructionRtpc = NULL;
    this->TransmissionLossRtpc = NULL;
}


