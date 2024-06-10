#include "META_CharacterInfo.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_CharacterMood.h"
#include "EMETA_CharacterState.h"
#include "EMETA_ItemQuality.h"

FMETA_CharacterInfo::FMETA_CharacterInfo() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).ID = EIGS_CharacterID::Char_Unknown;
    (*this).UniqGenericId = -1;
    (*this).Data.GenericVariantID = -1;
    (*this).Data.Name = FText::FromString(TEXT(""));
    (*this).Data.Surname = FText::FromString(TEXT(""));
    (*this).Data.Quality = EMETA_ItemQuality::None;
    (*this).Data.Level = 1;
    (*this).Data.CanLevelUp = true;
    (*this).Data.BaseUpkeepCost = 0;
    (*this).Data.BaseMissionCutPercent = 0;
    (*this).Data.MaxLeveled = false;
    (*this).Data.BaseHireCost = 0;
    (*this).Data.WeaponsCostCoefficient = 1.000000000e+00f;
    (*this).Data.JobsCanBeCompletedPerDay = 1;
    (*this).Data.Description = FText::FromString(TEXT(""));
    (*this).Data.Injuries = 0;
    (*this).Data.State = EMETA_CharacterState::None;
    (*this).Data.Mood = EMETA_CharacterMood::Neutral;
    auto& gen1909 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.Traits, 0));
    gen1909.Empty();
    auto& gen1910 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.Traits, 0));
    gen1910.Empty();
    auto& gen1911 = (*this).Data.Perks;
    gen1911.Empty();
    auto& gen1912 = (*this).Data.ChangedHeisterAttributes;
    gen1912.Empty();
    (*this).Data.Class = nullptr;
    (*this).Data.Attributes.MaxHealth = 960;
    (*this).Data.Attributes.ReviveCount = 3;
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TokenStreamVersion")->ContainerPtrToValuePtr<int32>(&(*this).Data.Attributes.AllowedWieldables, 0)) = 0;
    auto& gen1913 = (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.Attributes.AllowedWieldables, 0));
    gen1913.Empty();
    gen1913.AddDefaulted(1);
    auto& gen1914 = (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).Data.Attributes.AllowedWieldables, 0));
    gen1914.Empty();
    gen1914.AddDefaulted(5);
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("UserDescription")->ContainerPtrToValuePtr<FString>(&(*this).Data.Attributes.AllowedWieldables, 0)) = TEXT("");
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("AutoDescription")->ContainerPtrToValuePtr<FString>(&(*this).Data.Attributes.AllowedWieldables, 0)) = TEXT("");
    (*this).Data.Loadout.PrimaryWeapon = nullptr;
    (*this).Data.Loadout.PrimaryWeaponClass = nullptr;
    auto& gen1915 = (*this).Data.Loadout.PrimaryPersonalWeapons;
    gen1915.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    auto& gen1916 = (*this).Data.Loadout.PrimaryPersonalWeaponsClass;
    gen1916.Empty();
    (*this).Data.Loadout.SecondaryWeapon = nullptr;
    (*this).Data.Loadout.SecondaryWeaponClass = nullptr;
    auto& gen1917 = (*this).Data.Loadout.SecondaryPersonalWeapons;
    gen1917.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    auto& gen1918 = (*this).Data.Loadout.SecondaryPersonalWeaponsClass;
    gen1918.Empty();
    (*this).Data.Loadout.SelectedEquipment = nullptr;
    auto& gen1919 = (*this).Data.Loadout.ChainEquipments;
    gen1919.Empty();
    auto& gen1920 = (*this).Data.Loadout.ChainEquipmentsObjects;
    gen1920.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.Loadout.CharacterSkin, 0)) = NAME_None;
    (*this).Data.Loadout.Ability1ChargesLeft = -1;
    (*this).Data.MissionsWasPlayed = 0;
    (*this).Data.MutableVariationIndex = -1;
    (*this).Data.TimesHealed = 0;
    (*this).Data.bTemporary = false;
    (*this).Data.bLocked = false;
    (*this).Data.BaseLevelUpMultiplier = 0.000000000e+00f;
    (*this).IsUnseenInShop = false;
}

