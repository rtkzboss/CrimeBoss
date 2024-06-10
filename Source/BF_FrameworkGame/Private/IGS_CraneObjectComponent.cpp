#include "IGS_CraneObjectComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_CraneObjectComponent::UIGS_CraneObjectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}

void UIGS_CraneObjectComponent::SetOutlineState(EIGS_CameraOutlineState inState) {
}

void UIGS_CraneObjectComponent::SetComponentsForOutline(const TArray<UPrimitiveComponent*>& inComponents) {
}


