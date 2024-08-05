#include "IGS_GeneralListenerExclusionVolume.h"
#include "EIGS_BoxSphereShape.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_GeneralListenerExclusionVolume::AIGS_GeneralListenerExclusionVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bGenerateOverlapEvents = false;
}


