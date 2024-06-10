#include "IGS_GlobalItemTableRow.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"

FIGS_GlobalItemTableRow::FIGS_GlobalItemTableRow() {
    (*this).ID = nullptr;
    (*this).Data.HUDIconText = FText::FromString(TEXT(""));
    (*this).Data.MaxCount = -1;
    (*this).Data.ItemType = EIGS_ItemType::Item_Global;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.bShouldMove = true;
    (*this).Data.HitImpactID = nullptr;
    (*this).Data.HitImpactMass = 1.000000000e+00f;
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.ItemOffence, 0)) = NAME_None;
    auto& gen1848 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1848.Empty();
    auto& gen1849 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1849.Empty();
    auto& gen1850 = (*this).Data.GrantedAbilities;
    gen1850.Empty();
    auto& gen1851 = (*this).Data.AppliedEffects;
    gen1851.Empty();
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    auto& gen1852 = (*this).Data.AdditionalPreloadClasses;
    gen1852.Empty();
    auto& gen1853 = (*this).Data.AdditionalPreloadObjects;
    gen1853.Empty();
}

