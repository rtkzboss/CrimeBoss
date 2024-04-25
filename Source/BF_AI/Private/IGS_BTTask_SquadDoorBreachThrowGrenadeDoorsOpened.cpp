#include "IGS_BTTask_SquadDoorBreachThrowGrenadeDoorsOpened.h"

UIGS_BTTask_SquadDoorBreachThrowGrenadeDoorsOpened::UIGS_BTTask_SquadDoorBreachThrowGrenadeDoorsOpened() {
    this->NodeName = TEXT("Squad Door Breach Throw Grenade Doors Opened");
    this->Grenade = NULL;
    this->ContextActionCharacter = NULL;
    this->ContextActionCommand = NULL;
}

UIGS_AICommand* UIGS_BTTask_SquadDoorBreachThrowGrenadeDoorsOpened::CommandToThrowGrenade(AIGS_GameCharacterFramework* inAgent, FVector position) {
    return NULL;
}


