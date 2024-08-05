#include "IGS_BTTask_SquadDoorBreachThrowGrenade.h"

UIGS_BTTask_SquadDoorBreachThrowGrenade::UIGS_BTTask_SquadDoorBreachThrowGrenade() {
    auto& gen0 = (*this).BreachRolesKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).NodeName = TEXT("Squad Breach Throw Grenade");
}

bool UIGS_BTTask_SquadDoorBreachThrowGrenade::HasFlashbangExploded(UIGS_AICommandBreachThrowFlashbang* Command) {
    return false;
}

UIGS_AICommand* UIGS_BTTask_SquadDoorBreachThrowGrenade::CommandToThrowFlashbang(AIGS_GameCharacterFramework* inAgent, FVector position, bool IsRight) {
    return NULL;
}


