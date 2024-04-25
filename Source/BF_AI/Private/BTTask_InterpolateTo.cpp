#include "BTTask_InterpolateTo.h"

UBTTask_InterpolateTo::UBTTask_InterpolateTo() {
    this->NodeName = TEXT("Interpolate To");
    this->InterpolationSpeed = 1.00f;
    this->MovingCharacterVsHeistersCollisionStatus = EIGS_CharacterVsHeistersCollisionStatus::CharacterIgnoringPlayers;
}


