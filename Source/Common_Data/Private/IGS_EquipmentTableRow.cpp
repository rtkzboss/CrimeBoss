#include "IGS_EquipmentTableRow.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_EquipmentResourceType.h"
#include "EIGS_ItemType.h"

FIGS_EquipmentTableRow::FIGS_EquipmentTableRow() {
    (*this).ID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.TagID, 0)) = NAME_None;
    (*this).Data.Throwable = nullptr;
    (*this).Data.Description = FText::FromString(TEXT("None"));
    (*this).Data.bAllowedForGeneration = false;
    (*this).Data.PriceModifier = 1.000000000e+00f;
    (*this).Data.ResourceType = EIGS_EquipmentResourceType::ERT_Charges;
    (*this).Data.Charges = 10;
    (*this).Data.bRefreshChargesOvertime = false;
    (*this).Data.SecondsUntilChargeRefresh = -1;
    (*this).Data.bRefreshChargesWithKills = false;
    (*this).Data.KillsToChargeRefresh = -1;
    (*this).Data.Cooldown = 1.000000000e+00f;
    (*this).Data.InitChargesGameplayEffect = FSoftObjectPath(TEXT("/Game/00_Main/GameplayAbilitySystem/Abilities/ChargesEffects/GE_InitAbilityCharges.GE_InitAbilityCharges_C"), TEXT(""));
    (*this).Data.AddChargesGameplayEffect = FSoftObjectPath(TEXT("/Game/00_Main/GameplayAbilitySystem/Abilities/ChargesEffects/GE_AddAbilityCharges.GE_AddAbilityCharges_C"), TEXT(""));
    (*this).Data.InventoryIconStringGlyph = TEXT("");
    (*this).Data.UnlockProperties.IsUnlockable = false;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.UnlockProperties.RequiredTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.UnlockProperties.RequiredTags, 0)).Empty();
    (*this).Data.UnlockProperties.RequiredValue = 0.000000000e+00f;
    (*this).Data.UnlockProperties.ShowIfNotOwned = true;
    (*this).Data.UnlockProperties.UnlockCoverImage = nullptr;
    (*this).Data.ItemType = EIGS_ItemType::Item_Equipment;
    (*this).Data.Name = FText::FromString(TEXT("None"));
    (*this).Data.bShouldMove = true;
    (*this).Data.Image = nullptr;
    (*this).Data.PickupMesh = nullptr;
    (*this).Data.PickupMeshSkeletal = nullptr;
    (*this).Data.ItemPickUpAudioEvent = nullptr;
    (*this).Data.ItemThrowAudioEvent = nullptr;
    (*this).Data.HitImpactID = nullptr;
    (*this).Data.HitImpactMass = 1.000000000e+00f;
    (*this).Data.Quality = EMETA_ItemQuality::MinGenerate;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Data.ItemOffence, 0)) = TEXT("Offence.Actor.Item.Equipment");
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Data.GrantedTags, 0)).Empty();
    (*this).Data.GrantedAbilities.Empty();
    (*this).Data.AppliedEffects.Empty();
    (*this).Data.ItemPropertyFlags = 1;
    (*this).Data.MonetaryValue = 0;
    (*this).Data.ModelScaleFPV = 1.000000000e+00f;
    (*this).Data.ModelScale3PV = 1.000000000e+00f;
    (*this).Data.AdditionalPreloadClasses.Empty();
    (*this).Data.AdditionalPreloadObjects.Empty();
}

