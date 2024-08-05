#include "IGS_PlayVariationData.h"
#include "EIGS_DialogueGroup.h"

FIGS_PlayVariationData::FIGS_PlayVariationData() {
    (*this).GroupID = 0;
    (*this).LineID = NAME_None;
    (*this).Character.DialogueGroup = EIGS_DialogueGroup::None;
    (*this).Character.DialogueCharacter = 0;
    (*this).VoiceProgress = 0.000000000e+00f;
    (*this).VoiceLength = 2.000000000e+00f;
    (*this).VariationID = 0;
    (*this).VoiceMediaID = 0;
    (*this).IsTTSVoice = false;
    (*this).PlayExtraStart = true;
    (*this).PlayExtraFinish = true;
    (*this).IsImportant = true;
    (*this).ShouldReplicate = true;
}

