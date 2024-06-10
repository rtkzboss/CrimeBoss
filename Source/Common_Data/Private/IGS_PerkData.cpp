#include "IGS_PerkData.h"
#include "GameplayTagContainer.h"

FIGS_PerkData::FIGS_PerkData() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).Name = FText::FromString(TEXT("None"));
    (*this).Description = FText::FromString(TEXT("None"));
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*this).PerkType = EIGS_PerkType::PT_MetaPerk;
    (*this).PerkClass = EIGS_PerkClass::PC_Generic;
    (*this).PerkCategory = 0;
    (*this).PerkModeUsage = 0;
    auto& gen1960 = (*this).AllowedHeistersOverride;
    gen1960.Empty();
    (*this).ForbiddenHeistersLevel = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MutuallyExclusiveTag, 0)) = NAME_None;
    (*this).bAllowedForGeneration = false;
    (*this).SiblingID = nullptr;
    (*this).PerkLevel = 1;
    (*this).SwapPerkIDAfterPromotion = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SwapPerkTagAfterPromotion, 0)) = NAME_None;
    (*this).UnlockProperties.IsUnlockable = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockProperties.RequiredTag, 0)) = NAME_None;
    auto& gen1961 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0));
    gen1961.Empty();
    auto& gen1962 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0));
    gen1962.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockProperties.EntitlementTag, 0)) = NAME_None;
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
}

