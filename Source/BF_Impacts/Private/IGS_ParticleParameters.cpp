#include "IGS_ParticleParameters.h"

FIGS_ParticleParameters::FIGS_ParticleParameters() {
    (*this).Power = 1.000000000e+00f;
    (*this).AttachToComponent = nullptr;
    (*this).BoneName = NAME_None;
    (*this).IgnoreOptimizations = false;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTags, 0)).Empty();
}

