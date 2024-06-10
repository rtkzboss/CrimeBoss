#include "IGS_SpawnDefHolder.h"

FIGS_SpawnDefHolder::FIGS_SpawnDefHolder() {
    auto& gen3391 = (*this).SpawnGroups;
    gen3391.Empty();
    auto& gen3392 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).DefendTags, 0));
    gen3392.Empty();
    auto& gen3393 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).DefendTags, 0));
    gen3393.Empty();
}

