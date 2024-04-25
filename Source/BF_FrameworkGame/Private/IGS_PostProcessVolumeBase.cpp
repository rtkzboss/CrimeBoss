#include "IGS_PostProcessVolumeBase.h"

AIGS_PostProcessVolumeBase::AIGS_PostProcessVolumeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = false;
    this->Priority = 0.00f;
    this->BlendRadius = 0.00f;
    this->BlendWeight = 0.00f;
    this->bEnabled = false;
    this->bUnbound = false;
}


