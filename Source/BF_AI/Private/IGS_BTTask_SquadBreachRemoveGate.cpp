#include "IGS_BTTask_SquadBreachRemoveGate.h"

UIGS_BTTask_SquadBreachRemoveGate::UIGS_BTTask_SquadBreachRemoveGate() {
    this->NodeName = TEXT("Squad Breach Remove Gate");
    this->ContextActionCharacter = NULL;
    this->ContextActionCommand = NULL;
    this->BreachObject = NULL;
}

bool UIGS_BTTask_SquadBreachRemoveGate::IsObstacleCleared(UIGS_AICommandBreachRemoveObstacle* Command) {
    return false;
}

UIGS_AICommand* UIGS_BTTask_SquadBreachRemoveGate::CommandToClearGate(AIGS_GameCharacterFramework* inAgent, AActor* BreachableObject, FVector Location, FVector LookAtPoint) {
    return NULL;
}


