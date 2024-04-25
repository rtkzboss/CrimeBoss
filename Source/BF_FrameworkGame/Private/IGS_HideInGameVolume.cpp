#include "IGS_HideInGameVolume.h"

AIGS_HideInGameVolume::AIGS_HideInGameVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bSolidWhenSelected = true;
    this->bDisableTick = false;
    this->bCollectOnlyObjectsWithTag = false;
}

void AIGS_HideInGameVolume::SetObjectsHidden(bool inHidden) {
}


