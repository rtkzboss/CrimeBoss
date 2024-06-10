#include "IGS_ScenarioModifier.h"

FIGS_ScenarioModifier::FIGS_ScenarioModifier() {
    auto& gen1713 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Scenarios, 0));
    gen1713.Empty();
    auto& gen1714 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Scenarios, 0));
    gen1714.Empty();
    (*this).Modifier = 0;
}

