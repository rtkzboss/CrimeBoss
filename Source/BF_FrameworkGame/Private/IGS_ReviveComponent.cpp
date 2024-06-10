#include "IGS_ReviveComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_ReviveComponent::UIGS_ReviveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bIsHoldable = true;
}


