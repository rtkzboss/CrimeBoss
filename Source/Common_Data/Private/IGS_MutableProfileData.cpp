#include "IGS_MutableProfileData.h"

FIGS_MutableProfileData::FIGS_MutableProfileData() {
    (*this).MutableInstanceTPP = nullptr;
    (*this).MutableInstanceFPV = nullptr;
    (*this).OverridePopulation = nullptr;
    (*this).MutableProfile.StoredArchive.Empty();
    (*this).CharacterIcon = nullptr;
    (*this).bUseSecondPopulation = false;
    (*this).DialogueID = EIGS_DialogueHeisterCharacter::None;
}

