#include "IGS_CapsuleOverlappableComponent.h"

UIGS_CapsuleOverlappableComponent::UIGS_CapsuleOverlappableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverlappableType = EIGS_OverlapResponseType::ORT_NotifyOnly;
}


