#include "IGS_ZiplineInteractiveComponent.h"

UIGS_ZiplineInteractiveComponent::UIGS_ZiplineInteractiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SlideUp = false;
}

void UIGS_ZiplineInteractiveComponent::Multicast_Use_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}


