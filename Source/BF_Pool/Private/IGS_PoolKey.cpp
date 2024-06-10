#include "IGS_PoolKey.h"

FIGS_PoolKey::FIGS_PoolKey() {
    (*this).PoolObjectClass = nullptr;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTagContainer, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTagContainer, 0)).Empty();
}

