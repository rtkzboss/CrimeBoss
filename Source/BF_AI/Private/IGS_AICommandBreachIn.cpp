#include "IGS_AICommandBreachIn.h"
#include "EIGS_AICommandState.h"
#include "EIGS_AICommandType.h"

UIGS_AICommandBreachIn::UIGS_AICommandBreachIn() {
    (*this).Type = EIGS_AICommandType::AICT_BreachIn;
}


