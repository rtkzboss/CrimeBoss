#include "IGS_EntitlementItemsManagerBaseComponent.h"

UIGS_EntitlementItemsManagerBaseComponent::UIGS_EntitlementItemsManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsManagerDataDirty = false;
    this->bIsManagerInitialized = false;
}

bool UIGS_EntitlementItemsManagerBaseComponent::IsManagerInitialized() const {
    return false;
}



