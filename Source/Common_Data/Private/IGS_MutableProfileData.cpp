#include "IGS_MutableProfileData.h"

FIGS_MutableProfileData::FIGS_MutableProfileData() {
    (*this).MutableInstanceTPP = nullptr;
    (*this).MutableInstanceFPV = nullptr;
    (*this).OverridePopulation = nullptr;
    auto& gen1869 = (*this).MutableProfile.StoredArchive;
    gen1869.Empty();
    (*this).bUseSecondPopulation = false;
    (*this).DialogueID = EIGS_DialogueHeisterCharacter::None;
}

