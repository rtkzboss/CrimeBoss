#include "IGS_GenericItemsTableRow.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"
#include "EIGS_ItemWeight.h"

FIGS_GenericItemsTableRow::FIGS_GenericItemsTableRow() {
    (*this).ID = nullptr;
    (*this).Data.ItemWeight = EIGS_ItemWeight::Light;
    (*this).Data.ItemType = EIGS_ItemType::Item_GenericItems;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.bShouldMove = true;
    (*this).Data.HitImpactID = nullptr;
    (*this).Data.HitImpactMass = 1.000000000e+00f;
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.ItemOffence, 0)) = NAME_None;
    auto& gen1842 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1842.Empty();
    auto& gen1843 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1843.Empty();
    auto& gen1844 = (*this).Data.GrantedAbilities;
    gen1844.Empty();
    auto& gen1845 = (*this).Data.AppliedEffects;
    gen1845.Empty();
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    auto& gen1846 = (*this).Data.AdditionalPreloadClasses;
    gen1846.Empty();
    auto& gen1847 = (*this).Data.AdditionalPreloadObjects;
    gen1847.Empty();
}

