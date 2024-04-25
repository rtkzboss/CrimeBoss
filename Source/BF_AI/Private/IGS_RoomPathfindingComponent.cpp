#include "IGS_RoomPathfindingComponent.h"

UIGS_RoomPathfindingComponent::UIGS_RoomPathfindingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NextBreachPoint = NULL;
    this->DestinationRoom = NULL;
    this->priorRoom = NULL;
    this->NextRoom = NULL;
    this->CurrentRoom = NULL;
}


