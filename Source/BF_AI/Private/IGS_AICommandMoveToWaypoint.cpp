#include "IGS_AICommandMoveToWaypoint.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandMoveToWaypoint::UIGS_AICommandMoveToWaypoint() {
    this->Type = EIGS_AICommandType::AICT_MoveToWaypoint;
    this->ApproachDistance = 0.00f;
    this->ExactPosition = false;
    this->IsApproachMove = false;
}


