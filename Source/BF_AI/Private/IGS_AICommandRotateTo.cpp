#include "IGS_AICommandRotateTo.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandRotateTo::UIGS_AICommandRotateTo() {
    this->Type = EIGS_AICommandType::AICT_RotateTo;
    this->Duration = 0.00f;
}


