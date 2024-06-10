#include "META_CharacterData.h"
#include "GameplayTagContainer.h"

FMETA_CharacterData::FMETA_CharacterData() {
    (*this).GenericVariantID = -1;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Surname = FText::FromString(TEXT(""));
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
    auto& gen1921 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Traits, 0));
    gen1921.Empty();
    auto& gen1922 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Traits, 0));
    gen1922.Empty();
    auto& gen1923 = (*this).Perks;
    gen1923.Empty();
    auto& gen1924 = (*this).ChangedHeisterAttributes;
    gen1924.Empty();
    (*this).Class = nullptr;
    (*this).Attributes.MaxHealth = 960;
    (*this).Attributes.ReviveCount = 3;
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TokenStreamVersion")->ContainerPtrToValuePtr<int32>(&(*this).Attributes.AllowedWieldables, 0)) = 0;
    auto& gen1925 = (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Attributes.AllowedWieldables, 0));
    gen1925.Empty();
    gen1925.AddDefaulted(1);
    auto& gen1926 = (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).Attributes.AllowedWieldables, 0));
    gen1926.Empty();
    gen1926.AddDefaulted(5);
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("UserDescription")->ContainerPtrToValuePtr<FString>(&(*this).Attributes.AllowedWieldables, 0)) = TEXT("");
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("AutoDescription")->ContainerPtrToValuePtr<FString>(&(*this).Attributes.AllowedWieldables, 0)) = TEXT("");
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*this).Loadout.PrimaryWeaponClass = nullptr;
    auto& gen1927 = (*this).Loadout.PrimaryPersonalWeapons;
    gen1927.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    auto& gen1928 = (*this).Loadout.PrimaryPersonalWeaponsClass;
    gen1928.Empty();
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*this).Loadout.SecondaryWeaponClass = nullptr;
    auto& gen1929 = (*this).Loadout.SecondaryPersonalWeapons;
    gen1929.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    auto& gen1930 = (*this).Loadout.SecondaryPersonalWeaponsClass;
    gen1930.Empty();
    (*this).Loadout.SelectedEquipment = nullptr;
    auto& gen1931 = (*this).Loadout.ChainEquipments;
    gen1931.Empty();
    auto& gen1932 = (*this).Loadout.ChainEquipmentsObjects;
    gen1932.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.CharacterSkin, 0)) = NAME_None;
    (*this).Loadout.Ability1ChargesLeft = -1;
    (*this).MissionsWasPlayed = 0;
    (*this).MutableVariationIndex = -1;
    (*this).TimesHealed = 0;
    (*this).bTemporary = false;
    (*this).bLocked = false;
    (*this).BaseLevelUpMultiplier = 0.000000000e+00f;
}

