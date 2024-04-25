#include "IGS_Elevator.h"

AIGS_Elevator::AIGS_Elevator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ElevatorCable = NULL;
    this->CurrentFloor = 0;
    this->IsMoving = false;
}





