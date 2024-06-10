#include "IGS_MetaDialogueVariationData.h"

FIGS_MetaDialogueVariationData::FIGS_MetaDialogueVariationData() {
    (*this).VariantID = -1;
    (*this).CharacterName = FText::FromString(TEXT(""));
    (*this).DelayMin = 0.000000000e+00f;
    (*this).DelayMax = 0.000000000e+00f;
    (*this).SubtitleKey = FText::FromString(TEXT(""));
    (*this).SubtitleKeyEng = FText::FromString(TEXT(""));
    (*this).FacialAnimation = nullptr;
    (*this).VoiceAkExternalMediaAsset = nullptr;
    (*this).CensoredVoiceAkExternalMediaAsset = nullptr;
    (*this).VoiceMediaName = TEXT("");
    (*this).VoiceFilenameLength = 5.000000000e-01f;
    (*this).IsTTS = false;
}

