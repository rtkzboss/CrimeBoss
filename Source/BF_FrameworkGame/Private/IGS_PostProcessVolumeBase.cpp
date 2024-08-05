#include "IGS_PostProcessVolumeBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_PostProcessVolumeBase::AIGS_PostProcessVolumeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).BrushColor.B = 228;
    (*this).BrushColor.G = 7;
    (*this).BrushColor.R = 169;
    (*this).bColored = false;
}


