#include "IGS_LootItemTableRow.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"
#include "EIGS_ItemWeight.h"
#include "EIGS_LootSize.h"

FIGS_LootItemTableRow::FIGS_LootItemTableRow() {
    (*this).ID = nullptr;
    (*this).Data.LootSize = EIGS_LootSize::Medium;
    (*this).Data.SmallHits = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.LootCategoryTag, 0)) = TEXT("Loot.None");
    (*this).Data.ItemWeight = EIGS_ItemWeight::Light;
    (*this).Data.ItemType = EIGS_ItemType::Item_Loot;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.bShouldMove = true;
    (*this).Data.HitImpactID = nullptr;
    (*this).Data.HitImpactMass = 1.000000000e+00f;
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.ItemOffence, 0)) = TEXT("Offence.Actor.Item.Valuable");
    auto& gen1892 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1892.Empty();
    auto& gen1893 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1893.Empty();
    auto& gen1894 = (*this).Data.GrantedAbilities;
    gen1894.Empty();
    auto& gen1895 = (*this).Data.AppliedEffects;
    gen1895.Empty();
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    auto& gen1896 = (*this).Data.AdditionalPreloadClasses;
    gen1896.Empty();
    auto& gen1897 = (*this).Data.AdditionalPreloadObjects;
    gen1897.Empty();
}

