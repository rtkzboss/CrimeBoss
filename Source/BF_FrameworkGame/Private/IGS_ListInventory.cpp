#include "IGS_ListInventory.h"
#include "Templates/SubclassOf.h"

UIGS_ListInventory::UIGS_ListInventory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsReady = false;
    this->MaxBagCount = 2;
}

float UIGS_ListInventory::GetPocketLootWeight() {
    return 0.0f;
}

TArray<TSubclassOf<UIGS_InventoryObjectFramework>> UIGS_ListInventory::GetAndClearPocketLoot() {
    return TArray<TSubclassOf<UIGS_InventoryObjectFramework>>();
}

TArray<TSubclassOf<UIGS_InventoryObjectFramework>> UIGS_ListInventory::GetAndClearBonusPocketLoot() {
    return TArray<TSubclassOf<UIGS_InventoryObjectFramework>>();
}


