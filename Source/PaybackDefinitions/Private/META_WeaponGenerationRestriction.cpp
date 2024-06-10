#include "META_WeaponGenerationRestriction.h"

FMETA_WeaponGenerationRestriction::FMETA_WeaponGenerationRestriction() {
    auto& gen1748 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).WaponFilter, 0));
    gen1748.Empty();
    auto& gen1749 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).WaponFilter, 0));
    gen1749.Empty();
}

