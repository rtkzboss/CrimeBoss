#include "META_ObjectivePresetTableRow.h"

FMETA_ObjectivePresetTableRow::FMETA_ObjectivePresetTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    auto& gen1709 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Objectives, 0));
    gen1709.Empty();
    auto& gen1710 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Objectives, 0));
    gen1710.Empty();
}

