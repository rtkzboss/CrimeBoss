#include "IGS_Quick_CrewManagerSaveData.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"

FIGS_Quick_CrewManagerSaveData::FIGS_Quick_CrewManagerSaveData() {
    (*this).bInited = false;
    (*this).Heisters.Empty();
    (*this).BossCharacter.Loadout.PrimaryWeapon = nullptr;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.Amount = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.DaysInShop = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.PrimaryWeaponSaveData.WeaponSkin, 0)) = NAME_None;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.TargetWeaponsForUpgrade.Empty();
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.PrimaryWeaponSaveData.itemTag, 0)) = NAME_None;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.Price = 0;
    (*this).BossCharacter.Loadout.PrimaryWeaponSaveData.IsUnseenInShop = false;
    (*this).BossCharacter.Loadout.PrimaryPersonalWeapons.Empty();
    (*this).BossCharacter.Loadout.SecondaryWeapon = nullptr;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.Amount = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.AdditionalPercentageOfWeaponPrice = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.SuccessfulMissions = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.DaysInShop = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.SecondaryWeaponSaveData.WeaponSkin, 0)) = NAME_None;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.TargetWeaponsForUpgrade.Empty();
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.TargetQualityToUpdateWeapon = EMETA_ItemQuality::None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.SecondaryWeaponSaveData.itemTag, 0)) = NAME_None;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.Price = 0;
    (*this).BossCharacter.Loadout.SecondaryWeaponSaveData.IsUnseenInShop = false;
    (*this).BossCharacter.Loadout.SecondaryPersonalWeapons.Empty();
    (*this).BossCharacter.Loadout.Equipment.Empty();
    (*this).BossCharacter.Loadout.SelectedEquipment.EquipmentID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.SelectedEquipment.itemTag, 0)) = NAME_None;
    (*this).BossCharacter.Loadout.SelectedEquipment.Price = 0;
    (*this).BossCharacter.Loadout.SelectedEquipment.IsUnseenInShop = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).BossCharacter.Loadout.CharacterSkin, 0)) = NAME_None;
    (*this).BossCharacter.Perks.Empty();
}

