#include "IGS_AICommandMoveTo.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandMoveTo::UIGS_AICommandMoveTo() {
    this->Type = EIGS_AICommandType::AICT_MoveTo;
    this->StoppingDistance = 0.00f;
    this->MovementSpeed = EIGS_Speed::MS_Run;
}


