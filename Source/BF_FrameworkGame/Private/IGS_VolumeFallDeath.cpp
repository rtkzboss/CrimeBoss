#include "IGS_VolumeFallDeath.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_VolumeFallDeath::AIGS_VolumeFallDeath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bIsActive = true;
    (*this).BrushColor.G = 128;
    (*this).BrushColor.R = 255;
    (*this).BrushColor.A = 128;
    (*this).bColored = true;
    (*this).bSolidWhenSelected = true;
}

void AIGS_VolumeFallDeath::SetActive(bool Inactive) {
}


