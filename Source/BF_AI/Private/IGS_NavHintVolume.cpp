#include "IGS_NavHintVolume.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_NavHintVolume::AIGS_NavHintVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).BrushColor.B = 255;
    (*this).BrushColor.G = 200;
    (*this).BrushColor.A = 128;
    (*this).bColored = true;
    (*this).bSolidWhenSelected = true;
}


