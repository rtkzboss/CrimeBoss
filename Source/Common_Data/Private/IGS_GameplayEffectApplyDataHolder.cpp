#include "IGS_GameplayEffectApplyDataHolder.h"

FIGS_GameplayEffectApplyDataHolder::FIGS_GameplayEffectApplyDataHolder() {
    (*this).Effect = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).RuntimeValueTag, 0)) = NAME_None;
    (*this).RuntimeValue = 0.000000000e+00f;
}

