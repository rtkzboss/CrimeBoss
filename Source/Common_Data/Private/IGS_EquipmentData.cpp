#include "IGS_EquipmentData.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"

FIGS_EquipmentData::FIGS_EquipmentData() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).Description = FText::FromString(TEXT("None"));
    (*this).bAllowedForGeneration = false;
    (*this).PriceModifier = 1.000000000e+00f;
    (*this).ResourceType = EIGS_EquipmentResourceType::ERT_Charges;
    (*this).Charges = 10;
    (*this).bRefreshChargesOvertime = false;
    (*this).SecondsUntilChargeRefresh = -1;
    (*this).Cooldown = 1.000000000e+00f;
    (*this).InventoryIconStringGlyph = TEXT("");
    (*this).UnlockProperties.IsUnlockable = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockProperties.RequiredTag, 0)) = NAME_None;
    auto& gen1825 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0));
    gen1825.Empty();
    auto& gen1826 = (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0));
    gen1826.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockProperties.EntitlementTag, 0)) = NAME_None;
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
    (*this).ItemType = EIGS_ItemType::Item_Equipment;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ItemOffence, 0)) = TEXT("Offence.Actor.Item.Equipment");
}

