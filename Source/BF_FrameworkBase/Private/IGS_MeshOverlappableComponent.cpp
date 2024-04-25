#include "IGS_MeshOverlappableComponent.h"

UIGS_MeshOverlappableComponent::UIGS_MeshOverlappableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverlappableType = EIGS_OverlapResponseType::ORT_NotifyOnly;
}


