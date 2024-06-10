#include "IGS_BTTask_SquadDoorBreachIn.h"

UIGS_BTTask_SquadDoorBreachIn::UIGS_BTTask_SquadDoorBreachIn() {
    auto& gen533 = (*this).BreachRolesKey.AllowedTypes;
    gen533.Empty();
    gen533.AddDefaulted(1);
    (*this).NodeName = TEXT("Squad Breach In");
}

bool UIGS_BTTask_SquadDoorBreachIn::IsCommandActive(UIGS_AICommand* AICommand) {
    return false;
}


