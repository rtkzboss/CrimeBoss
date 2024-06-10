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
    (*this).Data.MetaCharacterIcon = nullptr;
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
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.Traits, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.Traits, 0)).Empty();
    (*this).Data.Perks.Empty();
    (*this).Data.ChangedHeisterAttributes.Empty();
    (*this).Data.Class = nullptr;
    (*this).Data.Attributes.MaxHealth = 960;
    (*this).Data.Attributes.ReviveCount = 3;
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TokenStreamVersion")->ContainerPtrToValuePtr<int32>(&(*this).Data.Attributes.AllowedWieldables, 0)) = 0;
    auto& gen0 = (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.Attributes.AllowedWieldables, 0));
    gen0.Empty();
    gen0.AddDefaulted(1);
    auto& gen1 = (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).Data.Attributes.AllowedWieldables, 0));
    gen1.Empty();
    gen1.AddDefaulted(5);
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("UserDescription")->ContainerPtrToValuePtr<FString>(&(*this).Data.Attributes.AllowedWieldables, 0)) = TEXT("");
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("AutoDescription")->ContainerPtrToValuePtr<FString>(&(*this).Data.Attributes.AllowedWieldables, 0)) = TEXT("");
    (*this).Data.Loadout.PrimaryWeapon = nullptr;
    (*this).Data.Loadout.PrimaryWeaponClass = nullptr;
    (*this).Data.Loadout.PrimaryPersonalWeapons.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).Data.Loadout.PrimaryPersonalWeaponsClass.Empty();
    (*this).Data.Loadout.SecondaryWeapon = nullptr;
    (*this).Data.Loadout.SecondaryWeaponClass = nullptr;
    (*this).Data.Loadout.SecondaryPersonalWeapons.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).Data.Loadout.SecondaryPersonalWeaponsClass.Empty();
    (*this).Data.Loadout.SelectedEquipment = nullptr;
    (*this).Data.Loadout.ChainEquipments.Empty();
    (*this).Data.Loadout.ChainEquipmentsObjects.Empty();
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

