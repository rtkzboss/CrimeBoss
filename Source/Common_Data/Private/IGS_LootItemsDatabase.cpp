#include "IGS_LootItemsDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_LootItemsDatabase::UIGS_LootItemsDatabase() {
}

int32 UIGS_LootItemsDatabase::GetIndex(const TSubclassOf<UIGS_LootItemInventoryObject>& inClass) const {
    return 0;
}

FIGS_LootItemTableRow UIGS_LootItemsDatabase::GetDataLootItem(UObject* inWCO, const TSubclassOf<UIGS_LootItemInventoryObject>& inClass, bool& outSucceeded) {
    return FIGS_LootItemTableRow{};
}

FIGS_LootItemTableRow UIGS_LootItemsDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_LootItemTableRow{};
}

TArray<FIGS_LootItemTableRow> UIGS_LootItemsDatabase::GetDatabaseTableBP() {
    return TArray<FIGS_LootItemTableRow>();
}


