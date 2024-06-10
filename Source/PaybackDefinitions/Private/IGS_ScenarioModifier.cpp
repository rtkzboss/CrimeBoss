#include "IGS_ScenarioModifier.h"

FIGS_ScenarioModifier::FIGS_ScenarioModifier() {
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Scenarios, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Scenarios, 0)).Empty();
    (*this).Modifier = 0;
}

