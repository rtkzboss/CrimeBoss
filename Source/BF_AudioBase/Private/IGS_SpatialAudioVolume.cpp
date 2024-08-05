#include "IGS_SpatialAudioVolume.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_SpatialAudioVolume::AIGS_SpatialAudioVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).CopyTransmissionLossToSurfaces = true;
}

void AIGS_SpatialAudioVolume::OnOverlapEnd(AActor* inOverlappedActor, AActor* inOtherActor) {
}

void AIGS_SpatialAudioVolume::OnOverlapBegin(AActor* inOverlappedActor, AActor* inOtherActor) {
}


