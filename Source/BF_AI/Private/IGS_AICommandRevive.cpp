#include "IGS_AICommandRevive.h"
#include "EIGS_AICommandState.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandRevive::UIGS_AICommandRevive() {
    (*this).Type = EIGS_AICommandType::AICT_Revive;
}


