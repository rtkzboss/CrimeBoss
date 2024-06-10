#include "IGS_EquipmentTableRow.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_EquipmentResourceType.h"
#include "EIGS_ItemType.h"

FIGS_EquipmentTableRow::FIGS_EquipmentTableRow() {
    (*this).ID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.TagID, 0)) = NAME_None;
    (*this).Data.Description = FText::FromString(TEXT("None"));
    (*this).Data.bAllowedForGeneration = false;
    (*this).Data.PriceModifier = 1.000000000e+00f;
    (*this).Data.ResourceType = EIGS_EquipmentResourceType::ERT_Charges;
    (*this).Data.Charges = 10;
    (*this).Data.bRefreshChargesOvertime = false;
    (*this).Data.SecondsUntilChargeRefresh = -1;
    (*this).Data.Cooldown = 1.000000000e+00f;
    (*this).Data.InventoryIconStringGlyph = TEXT("");
    (*this).Data.UnlockProperties.IsUnlockable = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.UnlockProperties.RequiredTag, 0)) = NAME_None;
    auto& gen1817 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.UnlockProperties.RequiredTags, 0));
    gen1817.Empty();
    auto& gen1818 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.UnlockProperties.RequiredTags, 0));
    gen1818.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.UnlockProperties.EntitlementTag, 0)) = NAME_None;
    (*this).Data.UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).Data.UnlockProperties.ShowIfNotOwned = true;
    (*this).Data.ItemType = EIGS_ItemType::Item_Equipment;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.bShouldMove = true;
    (*this).Data.HitImpactID = nullptr;
    (*this).Data.HitImpactMass = 1.000000000e+00f;
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.ItemOffence, 0)) = TEXT("Offence.Actor.Item.Equipment");
    auto& gen1819 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1819.Empty();
    auto& gen1820 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0));
    gen1820.Empty();
    auto& gen1821 = (*this).Data.GrantedAbilities;
    gen1821.Empty();
    auto& gen1822 = (*this).Data.AppliedEffects;
    gen1822.Empty();
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    auto& gen1823 = (*this).Data.AdditionalPreloadClasses;
    gen1823.Empty();
    auto& gen1824 = (*this).Data.AdditionalPreloadObjects;
    gen1824.Empty();
}

