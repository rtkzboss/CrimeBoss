#include "IGS_BTTask_SetMovementSpeed.h"

UIGS_BTTask_SetMovementSpeed::UIGS_BTTask_SetMovementSpeed() {
    this->NodeName = TEXT("Set Movement Speed");
    this->bIsBlackboardBased = false;
    this->bIsBasedOnCombatRange = false;
    this->MovementSpeedOutsideCombatRange = EIGS_Speed::MS_Sprint;
    this->MovementSpeed = EIGS_Speed::MS_Sprint;
}


