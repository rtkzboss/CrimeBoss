#include "IGS_NavLinkHandlerComponent.h"

UIGS_NavLinkHandlerComponent::UIGS_NavLinkHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UseSlideForLadder = false;
    this->CanUseDoors = true;
}


