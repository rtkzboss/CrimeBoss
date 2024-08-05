#include "META_HeisterSaveData.h"

FMETA_HeisterSaveData::FMETA_HeisterSaveData() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).ItemPrice = 0;
    (*this).ArrayIndex = 0;
    (*this).ID = EIGS_CharacterID::Char_Unknown;
    (*this).Quality = EMETA_ItemQuality::None;
    (*this).Level = 1;
    (*this).CanLevelUp = true;
    (*this).BaseHireCost = 0;
    (*this).UpkeepCost = 0;
    (*this).MissionCutPercent = 0;
    (*this).Injuries = 0;
    (*this).MaxLeveled = false;
    (*this).JobsCanBeCompletedPerDay = 1;
    (*this).State = EMETA_CharacterState::None;
    (*this).Mood = EMETA_CharacterMood::Neutral;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Traits, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Traits, 0)).Empty();
    (*this).Perks.Empty();
    (*this).ChangedHeisterAttributes.Empty();
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
    (*this).MissionsWasPlayed = 0;
    (*this).TimesHealed = 0;
    (*this).bTemporary = false;
    (*this).BaseLevelUpMultiplier = 0.000000000e+00f;
    (*this).IsUnseenInShop = false;
}

