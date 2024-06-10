#include "IGS_BTTask_SquadDoorBreachFight.h"

UIGS_BTTask_SquadDoorBreachFight::UIGS_BTTask_SquadDoorBreachFight() {
    auto& gen532 = (*this).BreachRolesKey.AllowedTypes;
    gen532.Empty();
    gen532.AddDefaulted(1);
    (*this).NodeName = TEXT("Squad Fight");
}


