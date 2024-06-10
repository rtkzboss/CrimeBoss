#include "IGS_PoolKey.h"

FIGS_PoolKey::FIGS_PoolKey() {
    (*this).PoolObjectClass = nullptr;
    auto& gen4087 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTagContainer, 0));
    gen4087.Empty();
    auto& gen4088 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTagContainer, 0));
    gen4088.Empty();
}

