#include "META_HeisterRandomizedData.h"
#include "GameplayTagContainer.h"

FMETA_HeisterRandomizedData::FMETA_HeisterRandomizedData() {
    (*this).FinalCost = 0;
    (*this).FinalUpkeep = 0;
    (*this).MissionCut = 0;
    auto& gen1804 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Traits, 0));
    gen1804.Empty();
    auto& gen1805 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Traits, 0));
    gen1805.Empty();
    auto& gen1806 = (*this).Perks;
    gen1806.Empty();
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    auto& gen1807 = (*this).Loadout.Equipment;
    gen1807.Empty();
    auto& gen1808 = (*this).Loadout.Perks;
    gen1808.Empty();
    (*this).Loadout.Ability1ChargesLeft = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.CharacterSkinID, 0)) = NAME_None;
}

