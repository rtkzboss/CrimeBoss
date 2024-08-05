#include "IGS_UnlockItemInfo.h"

FIGS_UnlockItemInfo::FIGS_UnlockItemInfo() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).UnlockCategory = EIGS_UnlockCategory::UC_Unknown;
    (*this).Quality = EMETA_ItemQuality::MinGenerate;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).Image = nullptr;
    (*this).UnlockCoverImage = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).RequiredEntitlementID, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RequiredTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).RequiredTags, 0)).Empty();
    (*this).RequiredValue = 0.000000000e+00f;
    (*this).ShowIfNotOwned = true;
}

