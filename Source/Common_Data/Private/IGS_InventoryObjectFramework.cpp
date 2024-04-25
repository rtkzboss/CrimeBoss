#include "IGS_InventoryObjectFramework.h"

UIGS_InventoryObjectFramework::UIGS_InventoryObjectFramework() {
    this->ItemType = EIGS_ItemType::Item_UNKNOWN;
    this->bUseCustomName = false;
}

void UIGS_InventoryObjectFramework::TransferData(UIGS_InventoryObjectFramework* inOtherItem) {
}

void UIGS_InventoryObjectFramework::LoadInventoryObjectData(FIGS_InventoryObjectUniversalData inUniversalData) {
}

bool UIGS_InventoryObjectFramework::IsWieldable() {
    return false;
}

bool UIGS_InventoryObjectFramework::IsWeapon() {
    return false;
}

bool UIGS_InventoryObjectFramework::IsThrowable() {
    return false;
}

bool UIGS_InventoryObjectFramework::IsPlayerForbidden() {
    return false;
}

bool UIGS_InventoryObjectFramework::IsMetal() {
    return false;
}

bool UIGS_InventoryObjectFramework::IsLootBag() {
    return false;
}

bool UIGS_InventoryObjectFramework::IsDroppable() {
    return false;
}

bool UIGS_InventoryObjectFramework::IsCarryable() {
    return false;
}

void UIGS_InventoryObjectFramework::InitDefaultInventoryObjectData() {
}

bool UIGS_InventoryObjectFramework::GetWasPickedUpBefore() {
    return false;
}

FText UIGS_InventoryObjectFramework::GetItemName() {
    return FText::GetEmpty();
}

bool UIGS_InventoryObjectFramework::GetIsBonusLoot() {
    return false;
}

FIGS_InventoryObjectUniversalData UIGS_InventoryObjectFramework::GetInventoryObjectData() {
    return FIGS_InventoryObjectUniversalData{};
}

int32 UIGS_InventoryObjectFramework::GetIndex() {
    return 0;
}

FText UIGS_InventoryObjectFramework::GetDefaultName() {
    return FText::GetEmpty();
}

FText UIGS_InventoryObjectFramework::GetCustomName() {
    return FText::GetEmpty();
}

FIGS_CommonItemData UIGS_InventoryObjectFramework::GetCommonDataBP() {
    return FIGS_CommonItemData{};
}


