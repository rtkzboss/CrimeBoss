#include "IGS_UnlockProperties.h"

FIGS_UnlockProperties::FIGS_UnlockProperties() {
    (*this).IsUnlockable = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).RequiredTag, 0)) = NAME_None;
    auto& gen1827 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RequiredTags, 0));
    gen1827.Empty();
    auto& gen1828 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RequiredTags, 0));
    gen1828.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
    (*this).RequiredValue = 0.000000000e+00f;
    (*this).ShowIfNotOwned = true;
}

