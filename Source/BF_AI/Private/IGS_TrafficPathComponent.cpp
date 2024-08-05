#include "IGS_TrafficPathComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "VT/RuntimeVirtualTextureEnum.h"

UIGS_TrafficPathComponent::UIGS_TrafficPathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ShowCustomColors = true;
    (*this).Weight = 1.000000000e+00f;
}

bool UIGS_TrafficPathComponent::IsEnabled() const {
    return false;
}


