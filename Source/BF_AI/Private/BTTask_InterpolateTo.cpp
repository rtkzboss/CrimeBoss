#include "BTTask_InterpolateTo.h"

UBTTask_InterpolateTo::UBTTask_InterpolateTo() {
    (*this).InterpolationSpeed = 1.000000000e+00f;
    (*this).MovingCharacterVsHeistersCollisionStatus = EIGS_CharacterVsHeistersCollisionStatus::CharacterIgnoringPlayers;
    auto& gen447 = (*this).BlackboardKey.AllowedTypes;
    gen447.Empty();
    gen447.AddDefaulted(2);
    (*this).NodeName = TEXT("Interpolate To");
}


