#include "IGS_NavMeshBoundsVolume.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_NavMeshBoundsVolume::AIGS_NavMeshBoundsVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).BrushColor.B = 0;
    (*this).BrushColor.G = 255;
    (*this).BrushColor.R = 0;
    (*this).BrushColor.A = 128;
    (*this).bSolidWhenSelected = true;
}


