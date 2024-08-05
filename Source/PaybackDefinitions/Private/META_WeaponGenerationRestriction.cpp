#include "META_WeaponGenerationRestriction.h"

FMETA_WeaponGenerationRestriction::FMETA_WeaponGenerationRestriction() {
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).WaponFilter, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).WaponFilter, 0)).Empty();
}

