#include "IGS_WeaponDefinitionTableRow.h"
#include "GameplayTagContainer.h"

FIGS_WeaponDefinitionTableRow::FIGS_WeaponDefinitionTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).ID = nullptr;
    (*this).FPSWeaponID = nullptr;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).SignatureCharacter = EIGS_CharacterID::Char_Unknown;
    auto& gen1976 = (*this).WeaponMods;
    gen1976.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).WeaponSkin, 0)) = NAME_None;
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*this).bAllowedForGeneration = false;
    (*this).UnlockProperties.IsUnlockable = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockProperties.RequiredTag, 0)) = NAME_None;
    auto& gen1977 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0));
    gen1977.Empty();
    auto& gen1978 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0));
    gen1978.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockProperties.EntitlementTag, 0)) = NAME_None;
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
}

