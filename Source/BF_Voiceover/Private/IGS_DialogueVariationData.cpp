#include "IGS_DialogueVariationData.h"
#include "EIGS_DialogueGroup.h"

FIGS_DialogueVariationData::FIGS_DialogueVariationData() {
    (*this).VariantID = -1;
    (*this).Priority = 10;
    (*this).DiscardRule = EIGS_DialogueDiscard::None;
    (*this).PlayChance = 1;
    (*this).SuspicionState = EIGS_DialogueSuspicionState::None;
    (*this).LevelRange = 0;
    (*this).IsDisabled = false;
    (*this).CanPlaySingle = true;
    (*this).Cooldown = 0.000000000e+00f;
    (*this).DelayMin = 0.000000000e+00f;
    (*this).DelayMax = 0.000000000e+00f;
    auto& gen3401 = (*this).VoicesMedia;
    gen3401.Empty();
    auto& gen3402 = (*this).VoicesMediaList;
    gen3402.Empty();
    auto& gen3403 = (*this).CensoredMediaList;
    gen3403.Empty();
    (*this).IsTTS = false;
    (*this).FacialAnimation = nullptr;
    (*this).SubtitleKey = FText::FromString(TEXT(""));
    (*this).SubtitleKeyEng = FText::FromString(TEXT(""));
    (*this).CustomCharacterName = FText::FromString(TEXT(""));
    (*this).TriggerDialogue.Group = EIGS_DialogueGroup::None;
    (*this).TriggerDialogue.DialogueID = NAME_None;
}

