#include "IGS_PlayerBlockingVolume.h"

AIGS_PlayerBlockingVolume::AIGS_PlayerBlockingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bSolidWhenSelected = true;
    this->bPushOut = false;
    this->bPushOutForceAddUpImpulse = false;
}

void AIGS_PlayerBlockingVolume::OnComponentHit(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit) {
}


