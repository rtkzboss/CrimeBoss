#include "IGS_BTTask_SquadBreachRemoveDoors.h"

UIGS_BTTask_SquadBreachRemoveDoors::UIGS_BTTask_SquadBreachRemoveDoors() {
    this->NodeName = TEXT("Squad Breach Remove Doors");
    this->ContextActionCharacter = NULL;
    this->ContextActionCommand = NULL;
    this->BreachObject = NULL;
}

bool UIGS_BTTask_SquadBreachRemoveDoors::IsObstacleCleared(UIGS_AICommandBreachRemoveObstacle* Command) {
    return false;
}

UIGS_AICommand* UIGS_BTTask_SquadBreachRemoveDoors::CommandToClearObstacle(AIGS_GameCharacterFramework* inAgent, AActor* BreachableObject, bool IsRight) {
    return NULL;
}


