#include "IGS_AdvancedMovementAnimComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_AdvancedMovementAnimComponent::UIGS_AdvancedMovementAnimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PrimaryComponentTick.bCanEverTick = true;
}


