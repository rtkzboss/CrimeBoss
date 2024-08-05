#include "IGS_BTTask_SquadDoorBreachFight.h"

UIGS_BTTask_SquadDoorBreachFight::UIGS_BTTask_SquadDoorBreachFight() {
    auto& gen0 = (*this).BreachRolesKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).NodeName = TEXT("Squad Fight");
}


