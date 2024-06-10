#include "IGS_CoverZone.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_CoverZone::AIGS_CoverZone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).BrushColor.B = 255;
    (*this).BrushColor.A = 255;
    (*this).bColored = true;
}


