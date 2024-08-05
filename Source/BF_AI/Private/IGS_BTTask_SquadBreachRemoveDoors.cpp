#include "IGS_BTTask_SquadBreachRemoveDoors.h"

UIGS_BTTask_SquadBreachRemoveDoors::UIGS_BTTask_SquadBreachRemoveDoors() {
    auto& gen0 = (*this).BreachRolesKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*this).NodeName = TEXT("Squad Breach Remove Doors");
}

bool UIGS_BTTask_SquadBreachRemoveDoors::IsObstacleCleared(UIGS_AICommandBreachRemoveObstacle* Command) {
    return false;
}

UIGS_AICommand* UIGS_BTTask_SquadBreachRemoveDoors::CommandToClearObstacle(AIGS_GameCharacterFramework* inAgent, AActor* BreachableObject, bool IsRight) {
    return NULL;
}


