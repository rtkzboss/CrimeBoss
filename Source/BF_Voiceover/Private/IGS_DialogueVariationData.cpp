#include "IGS_DialogueVariationData.h"

FIGS_DialogueVariationData::FIGS_DialogueVariationData() {
    this->VariantID = 0;
    this->Priority = 0;
    this->DiscardRule = EIGS_DialogueDiscard::None;
    this->PlayChance = 0;
    this->SuspicionState = EIGS_DialogueSuspicionState::None;
    this->LevelRange = 0;
    this->IsDisabled = false;
    this->CanPlaySingle = false;
    this->Cooldown = 0.00f;
    this->DelayMin = 0.00f;
    this->DelayMax = 0.00f;
    this->IsTTS = false;
    this->FacialAnimation = NULL;
}

