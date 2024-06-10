#include "IGS_PerksTableRow.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_PerkClass.h"
#include "EIGS_PerkType.h"

FIGS_PerksTableRow::FIGS_PerksTableRow() {
    (*this).ID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.TagID, 0)) = NAME_None;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.Description = FText::FromString(TEXT("None"));
    (*this).Data.Image = nullptr;
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*this).Data.PerkType = EIGS_PerkType::PT_MetaPerk;
    (*this).Data.PerkClass = EIGS_PerkClass::PC_Generic;
    (*this).Data.PerkCategory = 0;
    (*this).Data.PerkModeUsage = 0;
    (*this).Data.AllowedHeistersOverride.Empty();
    (*this).Data.ForbiddenHeistersLevel = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.MutuallyExclusiveTag, 0)) = NAME_None;
    (*this).Data.bAllowedForGeneration = false;
    (*this).Data.SiblingID = nullptr;
    (*this).Data.PerkLevel = 1;
    (*this).Data.SwapPerkIDAfterPromotion = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.SwapPerkTagAfterPromotion, 0)) = NAME_None;
    (*this).Data.UnlockProperties.IsUnlockable = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.UnlockProperties.RequiredTag, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.UnlockProperties.RequiredTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.UnlockProperties.RequiredTags, 0)).Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.UnlockProperties.EntitlementTag, 0)) = NAME_None;
    (*this).Data.UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).Data.UnlockProperties.ShowIfNotOwned = true;
    (*this).Data.UnlockProperties.UnlockCoverImage = nullptr;
}

