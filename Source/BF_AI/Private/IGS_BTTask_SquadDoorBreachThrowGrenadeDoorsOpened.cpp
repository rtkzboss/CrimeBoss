#include "IGS_BTTask_SquadDoorBreachThrowGrenadeDoorsOpened.h"

UIGS_BTTask_SquadDoorBreachThrowGrenadeDoorsOpened::UIGS_BTTask_SquadDoorBreachThrowGrenadeDoorsOpened() {
    (*this).NodeName = TEXT("Squad Door Breach Throw Grenade Doors Opened");
}

UIGS_AICommand* UIGS_BTTask_SquadDoorBreachThrowGrenadeDoorsOpened::CommandToThrowGrenade(AIGS_GameCharacterFramework* inAgent, FVector position) {
    return NULL;
}


