#include "META_CharacterData.h"
#include "GameplayTagContainer.h"

FMETA_CharacterData::FMETA_CharacterData() {
    (*this).GenericVariantID = -1;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Surname = FText::FromString(TEXT(""));
    (*this).MetaCharacterIcon = nullptr;
    (*this).Quality = EMETA_ItemQuality::None;
    (*this).Level = 1;
    (*this).CanLevelUp = true;
    (*this).BaseUpkeepCost = 0;
    (*this).BaseMissionCutPercent = 0;
    (*this).MaxLeveled = false;
    (*this).BaseHireCost = 0;
    (*this).WeaponsCostCoefficient = 1.000000000e+00f;
    (*this).JobsCanBeCompletedPerDay = 1;
    (*this).Description = FText::FromString(TEXT(""));
    (*this).Injuries = 0;
    (*this).State = EMETA_CharacterState::None;
    (*this).Mood = EMETA_CharacterMood::Neutral;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Traits, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Traits, 0)).Empty();
    (*this).Perks.Empty();
    (*this).ChangedHeisterAttributes.Empty();
    (*this).Class = nullptr;
    (*this).Attributes.MaxHealth = 960;
    (*this).Attributes.ReviveCount = 3;
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TokenStreamVersion")->ContainerPtrToValuePtr<int32>(&(*this).Attributes.AllowedWieldables, 0)) = 0;
    auto& gen0 = (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Attributes.AllowedWieldables, 0));
    gen0.Empty();
    gen0.AddDefaulted(1);
    auto& gen1 = (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).Attributes.AllowedWieldables, 0));
    gen1.Empty();
    gen1.AddDefaulted(5);
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("UserDescription")->ContainerPtrToValuePtr<FString>(&(*this).Attributes.AllowedWieldables, 0)) = TEXT("");
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("AutoDescription")->ContainerPtrToValuePtr<FString>(&(*this).Attributes.AllowedWieldables, 0)) = TEXT("");
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*this).Loadout.PrimaryWeaponClass = nullptr;
    (*this).Loadout.PrimaryPersonalWeapons.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).Loadout.PrimaryPersonalWeaponsClass.Empty();
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*this).Loadout.SecondaryWeaponClass = nullptr;
    (*this).Loadout.SecondaryPersonalWeapons.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).Loadout.SecondaryPersonalWeaponsClass.Empty();
    (*this).Loadout.SelectedEquipment = nullptr;
    (*this).Loadout.ChainEquipments.Empty();
    (*this).Loadout.ChainEquipmentsObjects.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.CharacterSkin, 0)) = NAME_None;
    (*this).Loadout.Ability1ChargesLeft = -1;
    (*this).MissionsWasPlayed = 0;
    (*this).MutableVariationIndex = -1;
    (*this).TimesHealed = 0;
    (*this).bTemporary = false;
    (*this).bLocked = false;
    (*this).BaseLevelUpMultiplier = 0.000000000e+00f;
}

