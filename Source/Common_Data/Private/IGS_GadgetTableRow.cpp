#include "IGS_GadgetTableRow.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"

FIGS_GadgetTableRow::FIGS_GadgetTableRow() {
    (*this).ID = nullptr;
    (*this).Data.ItemType = EIGS_ItemType::Item_Gadget;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.bShouldMove = true;
    (*this).Data.HitImpactID = nullptr;
    (*this).Data.HitImpactMass = 1.000000000e+00f;
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.ItemOffence, 0)) = TEXT("Offence.Actor.Item.Gadget");
    auto& gen1829 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1829.Empty();
    auto& gen1830 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1830.Empty();
    auto& gen1831 = (*this).Data.GrantedAbilities;
    gen1831.Empty();
    auto& gen1832 = (*this).Data.AppliedEffects;
    gen1832.Empty();
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    auto& gen1833 = (*this).Data.AdditionalPreloadClasses;
    gen1833.Empty();
    auto& gen1834 = (*this).Data.AdditionalPreloadObjects;
    gen1834.Empty();
}

