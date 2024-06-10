#include "IGS_VehicleDestinationAreaPointComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_VehicleDestinationAreaPointComponent::UIGS_VehicleDestinationAreaPointComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bIsEnabled = true;
}

void UIGS_VehicleDestinationAreaPointComponent::SetNewVisibility(bool Hidden) {
}


