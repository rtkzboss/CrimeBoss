#include "IGS_InteractionStealthKillComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_InteractionStealthKillComponent::UIGS_InteractionStealthKillComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).InteractionDistance = 5.000000000e+01f;
    (*this).HUDDistance = 5.000000000e+01f;
}


