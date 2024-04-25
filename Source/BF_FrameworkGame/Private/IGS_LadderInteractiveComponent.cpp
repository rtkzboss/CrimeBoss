#include "IGS_LadderInteractiveComponent.h"

UIGS_LadderInteractiveComponent::UIGS_LadderInteractiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bServerFirst = true;
    this->IsLadderTopEnd = false;
    this->IsRope = false;
}

void UIGS_LadderInteractiveComponent::Multicast_Use_Implementation(AIGS_GameCharacterFramework* inInstigator, bool inIsUnarmed) {
}


