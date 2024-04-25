#include "IGS_TrafficPathComponent.h"

UIGS_TrafficPathComponent::UIGS_TrafficPathComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->VehicleGroups = 0;
    this->IsOverride = false;
    this->IsBidirectional = false;
    this->IsEdge = false;
    this->ForbiddenArea = false;
    this->ShowCustomColors = true;
    this->Weight = 1.00f;
}

bool UIGS_TrafficPathComponent::IsEnabled() const {
    return false;
}


