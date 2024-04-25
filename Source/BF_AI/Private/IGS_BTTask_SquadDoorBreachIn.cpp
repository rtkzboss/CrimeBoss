#include "IGS_BTTask_SquadDoorBreachIn.h"

UIGS_BTTask_SquadDoorBreachIn::UIGS_BTTask_SquadDoorBreachIn() {
    this->NodeName = TEXT("Squad Breach In");
}

bool UIGS_BTTask_SquadDoorBreachIn::IsCommandActive(UIGS_AICommand* AICommand) {
    return false;
}


