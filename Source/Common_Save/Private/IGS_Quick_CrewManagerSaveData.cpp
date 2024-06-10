#include "IGS_Quick_CrewManagerSaveData.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"

FIGS_Quick_CrewManagerSaveData::FIGS_Quick_CrewManagerSaveData() {
    (*this).bInited = false;
    auto& gen2384 = (*this).Heisters;
    gen2384.Empty();
    (*this).BossCharacter.Loadout.PrimaryWeapon = nullptr;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.Amount = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.DaysInShop = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.PrimaryWeaponSaveData.WeaponSkin, 0)) = NAME_None;
    auto& gen2385 = (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.TargetWeaponsForUpgrade;
    gen2385.Empty();
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.PrimaryWeaponSaveData.itemTag, 0)) = NAME_None;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.Price = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.IsUnseenInShop = false;
    auto& gen2386 = (*this).BossCharacter.Loadout.PrimaryPersonalWeapons;
    gen2386.Empty();
    (*this).BossCharacter.Loadout.SecondaryWeapon = nullptr;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.Amount = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.DaysInShop = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.SecondaryWeaponSaveData.WeaponSkin, 0)) = NAME_None;
    auto& gen2387 = (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.TargetWeaponsForUpgrade;
    gen2387.Empty();
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.SecondaryWeaponSaveData.itemTag, 0)) = NAME_None;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.Price = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.IsUnseenInShop = false;
    auto& gen2388 = (*this).BossCharacter.Loadout.SecondaryPersonalWeapons;
    gen2388.Empty();
    auto& gen2389 = (*this).BossCharacter.Loadout.Equipment;
    gen2389.Empty();
    (*this).BossCharacter.Loadout.SelectedEquipment.EquipmentID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.SelectedEquipment.itemTag, 0)) = NAME_None;
    (*this).BossCharacter.Loadout.SelectedEquipment.Price = 0;
    (*this).BossCharacter.Loadout.SelectedEquipment.IsUnseenInShop = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.CharacterSkin, 0)) = NAME_None;
    auto& gen2390 = (*this).BossCharacter.Perks;
    gen2390.Empty();
}

