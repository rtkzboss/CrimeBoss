#include "IGS_BTTask_SquadDoorBreachBase.h"

UIGS_BTTask_SquadDoorBreachBase::UIGS_BTTask_SquadDoorBreachBase() {
    this->NodeName = TEXT("Squad Base Fight");
    this->BreachRoles = NULL;
    this->LeaderCommand = NULL;
    this->DeputyCommand = NULL;
    this->LeaderBackupCommand = NULL;
    this->DeputyBackupCommand = NULL;
}


