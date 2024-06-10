#include "IGS_DecalParameters.h"

FIGS_DecalParameters::FIGS_DecalParameters() {
    (*this).RandomRoll = true;
    (*this).RollDegree = 0.000000000e+00f;
    (*this).AttachToSocket = NAME_None;
    (*this).IgnoreOptimizations = false;
    auto& gen3416 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTags, 0));
    gen3416.Empty();
    auto& gen3417 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTags, 0));
    gen3417.Empty();
}

