#include "IGS_PlayerBlockingVolume.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_PlayerBlockingVolume::AIGS_PlayerBlockingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).BrushColor.R = 255;
    (*this).BrushColor.A = 255;
    (*this).bColored = true;
    (*this).bSolidWhenSelected = true;
}

void AIGS_PlayerBlockingVolume::OnComponentHit(UPrimitiveComponent* inHitComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit) {
}


