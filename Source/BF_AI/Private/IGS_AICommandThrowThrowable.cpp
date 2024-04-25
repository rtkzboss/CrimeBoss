#include "IGS_AICommandThrowThrowable.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandThrowThrowable::UIGS_AICommandThrowThrowable() {
    this->Type = EIGS_AICommandType::AICT_ThrowThrowable;
    this->ThrowableCooldown = 0.00f;
    this->GlobalCooldown = 0.00f;
    this->bIsScripted = true;
}


