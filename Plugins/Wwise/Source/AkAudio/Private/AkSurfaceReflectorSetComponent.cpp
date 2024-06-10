#include "AkSurfaceReflectorSetComponent.h"
#include "ComponentInstanceDataCache.h"

UAkSurfaceReflectorSetComponent::UAkSurfaceReflectorSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bEnableSurfaceReflectors = true;
    (*this).bEnableDiffraction = true;
}

void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet() {
}

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet() {
}

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet() {
}


