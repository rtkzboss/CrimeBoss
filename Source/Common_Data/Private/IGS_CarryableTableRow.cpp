#include "IGS_CarryableTableRow.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"
#include "EIGS_LootSize.h"
#include "EIGS_WieldableClass.h"

FIGS_CarryableTableRow::FIGS_CarryableTableRow() {
    (*this).ID = nullptr;
    (*this).Data.BaseDamage = 1.000000000e+02f;
    (*this).Data.BaseZoomMagnification = 1.250000000e+00f;
    (*this).Data.IsLoot = true;
    (*this).Data.LootSize = EIGS_LootSize::Medium;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.LootCategoryTag, 0)) = TEXT("Loot.None");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.PlacementType, 0)) = TEXT("Loot.None");
    (*this).Data.WieldableTortillaBaseFOV = 4.500000000e+01f;
    (*this).Data.WieldableTortillaAimFOV = 4.500000000e+01f;
    (*this).Data.HolsterTimeInSeconds = 5.000000000e-01f;
    (*this).Data.WieldingMovementSpeedMultiplier = 1.000000000e+00f;
    (*this).Data.Class = EIGS_WieldableClass::C_Generic;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.ClassTag, 0)) = TEXT("Item.Wieldable");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.WieldingOffence, 0)) = NAME_None;
    (*this).Data.ItemType = EIGS_ItemType::Item_Carryable;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.bShouldMove = true;
    (*this).Data.HitImpactID = nullptr;
    (*this).Data.HitImpactMass = 1.000000000e+00f;
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.ItemOffence, 0)) = NAME_None;
    auto& gen1781 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1781.Empty();
    auto& gen1782 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1782.Empty();
    auto& gen1783 = (*this).Data.GrantedAbilities;
    gen1783.Empty();
    auto& gen1784 = (*this).Data.AppliedEffects;
    gen1784.Empty();
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    auto& gen1785 = (*this).Data.AdditionalPreloadClasses;
    gen1785.Empty();
    auto& gen1786 = (*this).Data.AdditionalPreloadObjects;
    gen1786.Empty();
}

