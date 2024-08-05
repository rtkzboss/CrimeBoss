#include "IGS_PerkData.h"
#include "GameplayTagContainer.h"

FIGS_PerkData::FIGS_PerkData() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).Name = FText::FromString(TEXT("None"));
    (*this).Description = FText::FromString(TEXT("None"));
    (*this).Image = nullptr;
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*this).PerkType = EIGS_PerkType::PT_MetaPerk;
    (*this).PerkClass = EIGS_PerkClass::PC_Generic;
    (*this).PerkCategory = 0;
    (*this).PerkModeUsage = 0;
    (*this).AllowedHeistersOverride.Empty();
    (*this).ForbiddenHeistersLevel = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MutuallyExclusiveTag, 0)) = NAME_None;
    (*this).bAllowedForGeneration = false;
    (*this).SiblingID = nullptr;
    (*this).PerkLevel = 1;
    (*this).SwapPerkIDAfterPromotion = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SwapPerkTagAfterPromotion, 0)) = NAME_None;
    (*this).UnlockProperties.IsUnlockable = false;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0)).Empty();
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
    (*this).UnlockProperties.UnlockCoverImage = nullptr;
}

