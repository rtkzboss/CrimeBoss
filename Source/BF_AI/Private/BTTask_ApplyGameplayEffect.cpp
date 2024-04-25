#include "BTTask_ApplyGameplayEffect.h"

UBTTask_ApplyGameplayEffect::UBTTask_ApplyGameplayEffect() {
    this->NodeName = TEXT("Apply GameplayEffect");
    this->Target = EIGS_GameplayEffectTarget::GET_Self;
    this->GameplayEffect = NULL;
}


