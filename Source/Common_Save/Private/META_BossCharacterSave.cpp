#include "META_BossCharacterSave.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"

FMETA_BossCharacterSave::FMETA_BossCharacterSave() {
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*this).Loadout.PrimaryWeaponSaveData.Amount = 0;
    (*this).Loadout.PrimaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).Loadout.PrimaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).Loadout.PrimaryWeaponSaveData.DaysInShop = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.PrimaryWeaponSaveData.WeaponSkin, 0)) = NAME_None;
    (*this).Loadout.PrimaryWeaponSaveData.TargetWeaponsForUpgrade.Empty();
    (*this).Loadout.PrimaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.PrimaryWeaponSaveData.itemTag, 0)) = NAME_None;
    (*this).Loadout.PrimaryWeaponSaveData.Price = 0;
    (*this).Loadout.PrimaryWeaponSaveData.IsUnseenInShop = false;
    (*this).Loadout.PrimaryPersonalWeapons.Empty();
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*this).Loadout.SecondaryWeaponSaveData.Amount = 0;
    (*this).Loadout.SecondaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).Loadout.SecondaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).Loadout.SecondaryWeaponSaveData.DaysInShop = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.SecondaryWeaponSaveData.WeaponSkin, 0)) = NAME_None;
    (*this).Loadout.SecondaryWeaponSaveData.TargetWeaponsForUpgrade.Empty();
    (*this).Loadout.SecondaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.SecondaryWeaponSaveData.itemTag, 0)) = NAME_None;
    (*this).Loadout.SecondaryWeaponSaveData.Price = 0;
    (*this).Loadout.SecondaryWeaponSaveData.IsUnseenInShop = false;
    (*this).Loadout.SecondaryPersonalWeapons.Empty();
    (*this).Loadout.Equipment.Empty();
    (*this).Loadout.SelectedEquipment.EquipmentID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.SelectedEquipment.itemTag, 0)) = NAME_None;
    (*this).Loadout.SelectedEquipment.Price = 0;
    (*this).Loadout.SelectedEquipment.IsUnseenInShop = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.CharacterSkin, 0)) = NAME_None;
    (*this).Perks.Empty();
}

