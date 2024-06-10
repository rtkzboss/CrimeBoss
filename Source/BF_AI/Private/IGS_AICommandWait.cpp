#include "IGS_AICommandWait.h"
#include "EIGS_AICommandState.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandWait::UIGS_AICommandWait() {
    (*this).Type = EIGS_AICommandType::AICT_Wait;
}


