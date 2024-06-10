#include "IGS_CharacterTableRow.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_DialogueHeisterCharacter.h"

FIGS_CharacterTableRow::FIGS_CharacterTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).ID = EIGS_CharacterID::Char_Unknown;
    (*this).bIsGeneric = false;
    (*this).bUseInRandomPool = false;
    (*this).UniqueNormalClasses.bIsMale = true;
    (*this).UniqueNormalClasses.bIsMutable = false;
    (*this).UniqueNormalClasses.VariantName = FText::FromString(TEXT(""));
    (*this).UniqueNormalClasses.VariantDescription = FText::FromString(TEXT(""));
    (*this).UniqueNormalClasses.DialogueID = EIGS_DialogueHeisterCharacter::None;
    (*this).UniqueLeveledClasses.bIsMale = true;
    (*this).UniqueLeveledClasses.bIsMutable = false;
    (*this).UniqueLeveledClasses.VariantName = FText::FromString(TEXT(""));
    (*this).UniqueLeveledClasses.VariantDescription = FText::FromString(TEXT(""));
    (*this).UniqueLeveledClasses.DialogueID = EIGS_DialogueHeisterCharacter::None;
    auto& gen1870 = (*this).GenericVariants;
    gen1870.Empty();
    (*this).DefaultLoadout.PrimaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).DefaultLoadout.PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).DefaultLoadout.SecondaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).DefaultLoadout.SecondaryWeaponSkin, 0)) = NAME_None;
    auto& gen1871 = (*this).DefaultLoadout.Equipment;
    gen1871.Empty();
    auto& gen1872 = (*this).DefaultLoadout.Perks;
    gen1872.Empty();
    (*this).DefaultLoadout.Ability1ChargesLeft = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).DefaultLoadout.CharacterSkinID, 0)) = NAME_None;
    (*this).Traits.MaxHealth = 960;
    (*this).Traits.ReviveCount = 3;
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TokenStreamVersion")->ContainerPtrToValuePtr<int32>(&(*this).Traits.AllowedWieldables, 0)) = 0;
    auto& gen1873 = (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("TagDictionary")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Traits.AllowedWieldables, 0));
    gen1873.Empty();
    gen1873.AddDefaulted(1);
    auto& gen1874 = (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("QueryTokenStream")->ContainerPtrToValuePtr<TArray<uint8>>(&(*this).Traits.AllowedWieldables, 0));
    gen1874.Empty();
    gen1874.AddDefaulted(5);
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("UserDescription")->ContainerPtrToValuePtr<FString>(&(*this).Traits.AllowedWieldables, 0)) = TEXT("");
    (*TBaseStructure<FGameplayTagQuery>::Get()->FindPropertyByName("AutoDescription")->ContainerPtrToValuePtr<FString>(&(*this).Traits.AllowedWieldables, 0)) = TEXT("");
    (*this).CharacterName = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).Class = nullptr;
    (*this).CharacterWieldable3PVModelScaleMultiplier = 1.000000000e+00f;
    (*this).CharacterWieldableFPVModelScaleMultiplier = 1.000000000e+00f;
    (*this).MetaData.CharacterQuality = EMETA_ItemQuality::MinGenerate;
    auto& gen1875 = (*this).MetaData.PerkTags;
    gen1875.Empty();
    auto& gen1876 = (*this).MetaData.Perks;
    gen1876.Empty();
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*this).UnlockProperties.IsUnlockable = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockProperties.RequiredTag, 0)) = NAME_None;
    auto& gen1877 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0));
    gen1877.Empty();
    auto& gen1878 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0));
    gen1878.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockProperties.EntitlementTag, 0)) = NAME_None;
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
}

