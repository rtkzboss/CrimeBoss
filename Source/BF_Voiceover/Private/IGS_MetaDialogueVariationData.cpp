#include "IGS_MetaDialogueVariationData.h"

FIGS_MetaDialogueVariationData::FIGS_MetaDialogueVariationData() {
    this->VariantID = 0;
    this->DelayMin = 0.00f;
    this->DelayMax = 0.00f;
    this->FacialAnimation = NULL;
    this->VoiceAkExternalMediaAsset = NULL;
    this->CensoredVoiceAkExternalMediaAsset = NULL;
    this->VoiceFilenameLength = 0.00f;
    this->IsTTS = false;
}

