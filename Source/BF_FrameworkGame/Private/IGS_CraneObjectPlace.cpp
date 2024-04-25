#include "IGS_CraneObjectPlace.h"

AIGS_CraneObjectPlace::AIGS_CraneObjectPlace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DetectionComponent = NULL;
    this->PlacePinPoint = NULL;
}

void AIGS_CraneObjectPlace::OnEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

void AIGS_CraneObjectPlace::OnBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}


