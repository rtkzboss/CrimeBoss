#include "IGS_AICommandMoveToWaypoint.h"
#include "EIGS_Speed.h"
#include "EIGS_AICommandState.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandMoveToWaypoint::UIGS_AICommandMoveToWaypoint() {
    (*this).Type = EIGS_AICommandType::AICT_MoveToWaypoint;
}


