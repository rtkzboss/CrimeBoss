#include "IGS_SpeedMultiplier.h"

FIGS_SpeedMultiplier::FIGS_SpeedMultiplier() {
    (*this).Owner = nullptr;
    (*TBaseStructure<FActiveGameplayEffectHandle>::Get()->FindPropertyByName("Handle")->ContainerPtrToValuePtr<int32>(&(*this).ActiveGEHandle, 0)) = -1;
    (*TBaseStructure<FActiveGameplayEffectHandle>::Get()->FindPropertyByName("bPassedFiltersAndWasExecuted")->ContainerPtrToValuePtr<bool>(&(*this).ActiveGEHandle, 0)) = false;
}

