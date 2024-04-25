#include "IGS_ElevatorEntrance.h"

AIGS_ElevatorEntrance::AIGS_ElevatorEntrance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Elevator = NULL;
    this->FloorIndex = 0;
    this->OutOfOrder = false;
}


void AIGS_ElevatorEntrance::FloorReached() const {
}





