#include "IGS_SphereOverlappableComponent.h"

UIGS_SphereOverlappableComponent::UIGS_SphereOverlappableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverlappableType = EIGS_OverlapResponseType::ORT_NotifyOnly;
}


