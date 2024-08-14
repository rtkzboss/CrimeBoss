#include "IGS_UnlockProperties.h"

FIGS_UnlockProperties::FIGS_UnlockProperties() {
    (*this).IsUnlockable = false;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RequiredTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RequiredTags, 0)).Empty();
    (*this).RequiredValue = 0.000000000e+00f;
    (*this).ShowIfNotOwned = true;
    (*this).UnlockCoverImage = nullptr;
}

