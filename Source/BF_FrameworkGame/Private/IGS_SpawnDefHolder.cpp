#include "IGS_SpawnDefHolder.h"

FIGS_SpawnDefHolder::FIGS_SpawnDefHolder() {
    (*this).SpawnGroups.Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).DefendTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).DefendTags, 0)).Empty();
}

