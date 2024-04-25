#include "IGS_MutableProfileData.h"

FIGS_MutableProfileData::FIGS_MutableProfileData() {
    this->MutableInstanceTPP = NULL;
    this->MutableInstanceFPV = NULL;
    this->OverridePopulation = NULL;
    this->bUseSecondPopulation = false;
    this->DialogueID = EIGS_DialogueHeisterCharacter::None;
}

