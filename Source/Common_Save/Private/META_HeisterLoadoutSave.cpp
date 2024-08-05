#include "META_HeisterLoadoutSave.h"
#include "EMETA_ItemQuality.h"

FMETA_HeisterLoadoutSave::FMETA_HeisterLoadoutSave() {
    (*this).PrimaryWeapon = nullptr;
    (*this).PrimaryWeaponSaveData.Amount = 0;
    (*this).PrimaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).PrimaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).PrimaryWeaponSaveData.DaysInShop = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).PrimaryWeaponSaveData.WeaponSkin, 0)) = NAME_None;
    (*this).PrimaryWeaponSaveData.TargetWeaponsForUpgrade.Empty();
    (*this).PrimaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).PrimaryWeaponSaveData.itemTag, 0)) = NAME_None;
    (*this).PrimaryWeaponSaveData.Price = 0;
    (*this).PrimaryWeaponSaveData.IsUnseenInShop = false;
    (*this).PrimaryPersonalWeapons.Empty();
    (*this).SecondaryWeapon = nullptr;
    (*this).SecondaryWeaponSaveData.Amount = 0;
    (*this).SecondaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).SecondaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).SecondaryWeaponSaveData.DaysInShop = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SecondaryWeaponSaveData.WeaponSkin, 0)) = NAME_None;
    (*this).SecondaryWeaponSaveData.TargetWeaponsForUpgrade.Empty();
    (*this).SecondaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SecondaryWeaponSaveData.itemTag, 0)) = NAME_None;
    (*this).SecondaryWeaponSaveData.Price = 0;
    (*this).SecondaryWeaponSaveData.IsUnseenInShop = false;
    (*this).SecondaryPersonalWeapons.Empty();
    (*this).Equipment.Empty();
    (*this).SelectedEquipment.EquipmentID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SelectedEquipment.itemTag, 0)) = NAME_None;
    (*this).SelectedEquipment.Price = 0;
    (*this).SelectedEquipment.IsUnseenInShop = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CharacterSkin, 0)) = NAME_None;
}

