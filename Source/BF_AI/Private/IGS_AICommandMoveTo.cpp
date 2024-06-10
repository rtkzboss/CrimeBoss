#include "IGS_AICommandMoveTo.h"
#include "EIGS_AICommandState.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandMoveTo::UIGS_AICommandMoveTo() {
    (*this).MovementSpeed = EIGS_Speed::MS_Run;
    (*this).Type = EIGS_AICommandType::AICT_MoveTo;
}


