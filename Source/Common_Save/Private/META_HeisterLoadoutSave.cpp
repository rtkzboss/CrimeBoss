#include "META_HeisterLoadoutSave.h"
#include "EMETA_ItemQuality.h"

FMETA_HeisterLoadoutSave::FMETA_HeisterLoadoutSave() {
    (*this).PrimaryWeapon = nullptr;
    (*this).PrimaryWeaponSaveData.Amount = 0;
    (*this).PrimaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).PrimaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).PrimaryWeaponSaveData.DaysInShop = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).PrimaryWeaponSaveData.WeaponSkin, 0)) = NAME_None;
    auto& gen2234 = (*this).PrimaryWeaponSaveData.TargetWeaponsForUpgrade;
    gen2234.Empty();
    (*this).PrimaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).PrimaryWeaponSaveData.itemTag, 0)) = NAME_None;
    (*this).PrimaryWeaponSaveData.Price = 0;
    (*this).PrimaryWeaponSaveData.IsUnseenInShop = false;
    auto& gen2235 = (*this).PrimaryPersonalWeapons;
    gen2235.Empty();
    (*this).SecondaryWeapon = nullptr;
    (*this).SecondaryWeaponSaveData.Amount = 0;
    (*this).SecondaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).SecondaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).SecondaryWeaponSaveData.DaysInShop = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SecondaryWeaponSaveData.WeaponSkin, 0)) = NAME_None;
    auto& gen2236 = (*this).SecondaryWeaponSaveData.TargetWeaponsForUpgrade;
    gen2236.Empty();
    (*this).SecondaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SecondaryWeaponSaveData.itemTag, 0)) = NAME_None;
    (*this).SecondaryWeaponSaveData.Price = 0;
    (*this).SecondaryWeaponSaveData.IsUnseenInShop = false;
    auto& gen2237 = (*this).SecondaryPersonalWeapons;
    gen2237.Empty();
    auto& gen2238 = (*this).Equipment;
    gen2238.Empty();
    (*this).SelectedEquipment.EquipmentID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SelectedEquipment.itemTag, 0)) = NAME_None;
    (*this).SelectedEquipment.Price = 0;
    (*this).SelectedEquipment.IsUnseenInShop = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CharacterSkin, 0)) = NAME_None;
}

