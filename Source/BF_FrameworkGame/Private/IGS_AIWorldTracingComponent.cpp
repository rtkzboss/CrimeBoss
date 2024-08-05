#include "IGS_AIWorldTracingComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_AIWorldTracingComponent::UIGS_AIWorldTracingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DistanceToLean = 1.000000000e+02f;
    (*this).PrimaryComponentTick.bCanEverTick = true;
    (*this).PrimaryComponentTick.bStartWithTickEnabled = false;
}

EIGS_LeanSide UIGS_AIWorldTracingComponent::GetCurrentLeanSide() const {
    return EIGS_LeanSide::LeanSide_None;
}


