#include "IGS_PlayVariationData.h"

FIGS_PlayVariationData::FIGS_PlayVariationData() {
    this->GroupID = 0;
    this->VoiceProgress = 0.00f;
    this->VoiceLength = 0.00f;
    this->VariationID = 0;
    this->VoiceMediaID = 0;
    this->IsTTSVoice = false;
    this->PlayExtraStart = false;
    this->PlayExtraFinish = false;
    this->IsImportant = false;
    this->ShouldReplicate = false;
}

