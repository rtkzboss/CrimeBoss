#include "IGS_DecalParameters.h"

FIGS_DecalParameters::FIGS_DecalParameters() {
    (*this).RandomRoll = true;
    (*this).RollDegree = 0.000000000e+00f;
    (*this).AttachToSocket = NAME_None;
    (*this).AttachToComponent = nullptr;
    (*this).IgnoreOptimizations = false;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).PoolTags, 0)).Empty();
}

