#include "IGS_LootCollectionDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_LootCollectionDatabase::UIGS_LootCollectionDatabase() {
}

int32 UIGS_LootCollectionDatabase::GetIndex(const TSubclassOf<UIGS_LootCollectionObject>& inClass) const {
    return 0;
}

FIGS_LootCollectionTableRow UIGS_LootCollectionDatabase::GetDataLootItem(UObject* inWCO, const TSubclassOf<UIGS_LootCollectionObject>& inClass, bool& outSucceeded) {
    return FIGS_LootCollectionTableRow{};
}

FIGS_LootCollectionTableRow UIGS_LootCollectionDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_LootCollectionTableRow{};
}

TArray<FIGS_LootCollectionTableRow> UIGS_LootCollectionDatabase::GetDatabaseTableBP() {
    return TArray<FIGS_LootCollectionTableRow>();
}


