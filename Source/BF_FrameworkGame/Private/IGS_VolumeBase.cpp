#include "IGS_VolumeBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_VolumeBase::AIGS_VolumeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).BrushColor.G = 255;
    (*this).BrushColor.A = 255;
    (*this).bColored = true;
    (*this).bSolidWhenSelected = true;
}


