#include "IGS_AIWorldTracingComponent.h"

UIGS_AIWorldTracingComponent::UIGS_AIWorldTracingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DistanceToLean = 100.00f;
}

EIGS_LeanSide UIGS_AIWorldTracingComponent::GetCurrentLeanSide() const {
    return EIGS_LeanSide::LeanSide_None;
}


