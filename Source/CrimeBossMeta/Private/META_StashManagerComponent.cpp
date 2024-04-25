#include "META_StashManagerComponent.h"
#include "Templates/SubclassOf.h"

UMETA_StashManagerComponent::UMETA_StashManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentLootValueWasSoldToPawnShop = 0;
    this->LastDayWhenWarehouseAttackStarted = 0;
    this->ChanceWarehouseAttack = 0;
    this->WarehouseAttackMissionID = NULL;
    this->MoneyWarehouseAttackWasRemoved = 0;
}

void UMETA_StashManagerComponent::SetCashForPartner(EMETA_Partner Partner, int32 inCash) {
}

bool UMETA_StashManagerComponent::RemoveEquipmentFromStashByObject(UMETA_Equipment* inEquipment) {
    return false;
}


void UMETA_StashManagerComponent::GetWarehouseAttackLosses(int32& outRemovedMoney, TMap<FGameplayTag, int32>& outRemovedLoot) const {
}

TMap<FGameplayTag, int32> UMETA_StashManagerComponent::GetSortedLoot(bool inAscSort) {
    return TMap<FGameplayTag, int32>();
}

void UMETA_StashManagerComponent::GetPlayersArmyTier_Implementation(EMETA_ArmyTier& ArmyTier) const {
}

FMETA_PartnerInfo UMETA_StashManagerComponent::GetPartnerInfo(EMETA_Partner Partner, bool& bSuccess) {
    return FMETA_PartnerInfo{};
}

TArray<FGameplayTag> UMETA_StashManagerComponent::GetParentLootTagsByOperator(EMETA_ConditionOperator inOperator, int32 InValue) {
    return TArray<FGameplayTag>();
}

TArray<FGameplayTag> UMETA_StashManagerComponent::GetLootTagsByOperator(EMETA_ConditionOperator inOperator, int32 InValue) {
    return TArray<FGameplayTag>();
}

bool UMETA_StashManagerComponent::GetClosestMetaTagFromParents(FGameplayTag inLootTag, FGameplayTag& outMetaTag) {
    return false;
}

void UMETA_StashManagerComponent::ChangeLootByValue(FGameplayTag inLootTag, int32 InValue) {
}

void UMETA_StashManagerComponent::ChangeCashForPartner(EMETA_Partner Partner, int32 ByValue) {
}

void UMETA_StashManagerComponent::AddEquipmentToStashByObject(UMETA_Equipment* inEquipment) {
}

UMETA_Equipment* UMETA_StashManagerComponent::AddEquipmentToStashByID(TSubclassOf<UIGS_EquipmentInventoryObject> inEquipmentId) {
    return NULL;
}


