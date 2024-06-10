#include "IGS_HideInGameVolume.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_HideInGameVolume::AIGS_HideInGameVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).BrushColor.B = 169;
    (*this).BrushColor.G = 69;
    (*this).BrushColor.R = 69;
    (*this).BrushColor.A = 155;
    (*this).bColored = true;
    (*this).bSolidWhenSelected = true;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).PrimaryActorTick.TickInterval = 5.000000000e-01f;
}

void AIGS_HideInGameVolume::SetObjectsHidden(bool inHidden) {
}


