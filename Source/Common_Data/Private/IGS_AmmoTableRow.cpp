#include "IGS_AmmoTableRow.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"

FIGS_AmmoTableRow::FIGS_AmmoTableRow() {
    (*this).ID = nullptr;
    (*this).Data.ItemType = EIGS_ItemType::Item_Ammo;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.bShouldMove = true;
    (*this).Data.HitImpactID = nullptr;
    (*this).Data.HitImpactMass = 1.000000000e+00f;
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.ItemOffence, 0)) = NAME_None;
    auto& gen1769 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1769.Empty();
    auto& gen1770 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1770.Empty();
    auto& gen1771 = (*this).Data.GrantedAbilities;
    gen1771.Empty();
    auto& gen1772 = (*this).Data.AppliedEffects;
    gen1772.Empty();
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    auto& gen1773 = (*this).Data.AdditionalPreloadClasses;
    gen1773.Empty();
    auto& gen1774 = (*this).Data.AdditionalPreloadObjects;
    gen1774.Empty();
}

