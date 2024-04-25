#include "IGS_VolumeFallDeath.h"

AIGS_VolumeFallDeath::AIGS_VolumeFallDeath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bSolidWhenSelected = true;
    this->bIsActive = true;
}

void AIGS_VolumeFallDeath::SetActive(bool Inactive) {
}


