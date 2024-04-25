#include "IGS_VentShaftInteractiveComponent.h"

UIGS_VentShaftInteractiveComponent::UIGS_VentShaftInteractiveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IsHighVentShaft = false;
    this->IsExit = false;
    this->IsEnd = false;
}

void UIGS_VentShaftInteractiveComponent::Multicast_Use_Implementation(AIGS_GameCharacterFramework* inInstigator) {
}


