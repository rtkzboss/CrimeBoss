#include "IGS_AIHeliSpawnComponent.h"

UIGS_AIHeliSpawnComponent::UIGS_AIHeliSpawnComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FallingSpeed = 400.00f;
    this->GetOutAnimationDistance = 88.00f;
}


