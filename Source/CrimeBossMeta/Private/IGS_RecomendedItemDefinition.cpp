#include "IGS_RecomendedItemDefinition.h"

FIGS_RecomendedItemDefinition::FIGS_RecomendedItemDefinition() {
    (*this).AmountToBeSelected = 0;
    auto& gen3458 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).JobCategoryPool, 0));
    gen3458.Empty();
    auto& gen3459 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).JobCategoryPool, 0));
    gen3459.Empty();
}

