#include "IGS_InventoryHelpers.h"
#include "Templates/SubclassOf.h"

UIGS_InventoryHelpers::UIGS_InventoryHelpers() {
}

bool UIGS_InventoryHelpers::RemoveItemFromGlobalInventory(const UObject* inWCO, TSubclassOf<UIGS_GlobalInventoryObject> inItemClass) {
    return false;
}

bool UIGS_InventoryHelpers::HasWTInGlobalInventory(const UObject* inWCO) {
    return false;
}

UIGS_ListInventory* UIGS_InventoryHelpers::GetPlayerInventory(AIGS_GameCharacterFramework* inPlayer) {
    return NULL;
}

int32 UIGS_InventoryHelpers::GetItemCountInPlayerInventory(AIGS_GameCharacterFramework* inPlayer, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
    return 0;
}

int32 UIGS_InventoryHelpers::GetItemCountInGlobalInventory(const UObject* inWCO, TSubclassOf<UIGS_GlobalInventoryObject> inItemClass) {
    return 0;
}

int32 UIGS_InventoryHelpers::GetGlobalInventoryFreeSlotsCount(const UObject* inWCO) {
    return 0;
}

UIGS_GlobalInventory* UIGS_InventoryHelpers::GetGlobalInventory(const UObject* inWCO) {
    return NULL;
}

float UIGS_InventoryHelpers::GetCurrentInventoryValue(AIGS_GameCharacterFramework* inPlayer) {
    return 0.0f;
}

bool UIGS_InventoryHelpers::DoesPlayerHaveItemWithPropertyInInventory(AIGS_GameCharacterFramework* inPlayer, EIGS_ItemPropertyFlags inItemFlag) {
    return false;
}

bool UIGS_InventoryHelpers::DoesPlayerHaveItemInInventory(AIGS_GameCharacterFramework* inPlayer, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
    return false;
}

bool UIGS_InventoryHelpers::DoesPlayerHaveItemCountInInventory(AIGS_GameCharacterFramework* inPlayer, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass, int32 inCount) {
    return false;
}

bool UIGS_InventoryHelpers::DoesGlobalInventoryHaveItem(const UObject* inWCO, TSubclassOf<UIGS_GlobalInventoryObject> inItemClass) {
    return false;
}

bool UIGS_InventoryHelpers::BindOnGlobalInventoryWTAdded(const UObject* inWCO, FIGS_GlobalItemChangedDelegate InDelegate) {
    return false;
}

bool UIGS_InventoryHelpers::BindOnGlobalInventoryModified(const UObject* inWCO, FIGS_GlobalInventoryModifiedDelegate InDelegate) {
    return false;
}

bool UIGS_InventoryHelpers::BindOnGlobalInventoryItemRemoved(const UObject* inWCO, FIGS_GlobalItemChangedDelegate InDelegate) {
    return false;
}

bool UIGS_InventoryHelpers::BindOnGlobalInventoryItemAdded(const UObject* inWCO, FIGS_GlobalItemChangedDelegate InDelegate) {
    return false;
}

bool UIGS_InventoryHelpers::AddWTToGlobalInventory(const UObject* inWCO, TSubclassOf<UIGS_GlobalInventoryObject> inWTClass) {
    return false;
}

bool UIGS_InventoryHelpers::AddItemToGlobalInventory(const UObject* inWCO, TSubclassOf<UIGS_GlobalInventoryObject> inItemClass) {
    return false;
}

bool UIGS_InventoryHelpers::AddItemsToGlobalInventory(const UObject* inWCO, TSubclassOf<UIGS_GlobalInventoryObject> inItemClass, int32 inCount) {
    return false;
}


