#include "IGS_RecomendedItemDefinition.h"

FIGS_RecomendedItemDefinition::FIGS_RecomendedItemDefinition() {
    (*this).AmountToBeSelected = 0;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).JobCategoryPool, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).JobCategoryPool, 0)).Empty();
}

