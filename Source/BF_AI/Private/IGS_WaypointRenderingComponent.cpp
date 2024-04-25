#include "IGS_WaypointRenderingComponent.h"

UIGS_WaypointRenderingComponent::UIGS_WaypointRenderingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsEditorOnly = true;
    this->Mobility = EComponentMobility::Stationary;
}


