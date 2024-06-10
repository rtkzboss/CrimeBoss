#include "IGS_ParticleParameters.h"

FIGS_ParticleParameters::FIGS_ParticleParameters() {
    (*this).Power = 1.000000000e+00f;
    (*this).BoneName = NAME_None;
    (*this).IgnoreOptimizations = false;
    auto& gen3418 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTags, 0));
    gen3418.Empty();
    auto& gen3419 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTags, 0));
    gen3419.Empty();
}

