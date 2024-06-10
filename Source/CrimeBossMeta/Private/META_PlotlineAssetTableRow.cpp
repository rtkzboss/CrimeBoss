#include "META_PlotlineAssetTableRow.h"

FMETA_PlotlineAssetTableRow::FMETA_PlotlineAssetTableRow() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).UnlockBossLevel = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).PreviousVersion, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).NextTier, 0)) = NAME_None;
    (*this).AssetName = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).Image = nullptr;
    (*this).Score = 0;
    (*this).BossPointMultiplier = 1.000000000e+00f;
    (*this).bCanBeLost = false;
    (*this).Availability = EMETA_PlotlineAssetAvailability::INVALID;
    (*this).bMustBeBought = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).PriceTag, 0)) = NAME_None;
    (*this).Price = 0;
    (*this).bNotPersistent = false;
}

