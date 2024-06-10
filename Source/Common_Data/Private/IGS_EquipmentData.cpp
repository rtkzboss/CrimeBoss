#include "IGS_EquipmentData.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"

FIGS_EquipmentData::FIGS_EquipmentData() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
    (*this).Throwable = nullptr;
    (*this).Description = FText::FromString(TEXT("None"));
    (*this).bAllowedForGeneration = false;
    (*this).PriceModifier = 1.000000000e+00f;
    (*this).ResourceType = EIGS_EquipmentResourceType::ERT_Charges;
    (*this).Charges = 10;
    (*this).bRefreshChargesOvertime = false;
    (*this).SecondsUntilChargeRefresh = -1;
    (*this).Cooldown = 1.000000000e+00f;
    (*this).InitChargesGameplayEffect = FSoftObjectPath(TEXT("/Game/00_Main/GameplayAbilitySystem/Abilities/ChargesEffects/GE_InitAbilityCharges.GE_InitAbilityCharges_C"), TEXT(""));
    (*this).AddChargesGameplayEffect = FSoftObjectPath(TEXT("/Game/00_Main/GameplayAbilitySystem/Abilities/ChargesEffects/GE_AddAbilityCharges.GE_AddAbilityCharges_C"), TEXT(""));
    (*this).InventoryIconStringGlyph = TEXT("");
    (*this).UnlockProperties.IsUnlockable = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockProperties.RequiredTag, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).UnlockProperties.RequiredTags, 0)).Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockProperties.EntitlementTag, 0)) = NAME_None;
    (*this).UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).UnlockProperties.ShowIfNotOwned = true;
    (*this).UnlockProperties.UnlockCoverImage = nullptr;
    (*this).ItemType = EIGS_ItemType::Item_Equipment;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ItemOffence, 0)) = TEXT("Offence.Actor.Item.Equipment");
}

