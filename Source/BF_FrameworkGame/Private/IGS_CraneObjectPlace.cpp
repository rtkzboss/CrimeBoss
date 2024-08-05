#include "IGS_CraneObjectPlace.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_CraneObjectPlace::AIGS_CraneObjectPlace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AIGS_CraneObjectPlace::OnEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

void AIGS_CraneObjectPlace::OnBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}


