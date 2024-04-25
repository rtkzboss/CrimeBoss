#include "IGS_BoxOverlappableComponent.h"

UIGS_BoxOverlappableComponent::UIGS_BoxOverlappableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverlappableType = EIGS_OverlapResponseType::ORT_NotifyOnly;
}


