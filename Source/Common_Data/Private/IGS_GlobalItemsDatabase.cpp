#include "IGS_GlobalItemsDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_GlobalItemsDatabase::UIGS_GlobalItemsDatabase() {
}

int32 UIGS_GlobalItemsDatabase::GetIndex(const TSubclassOf<UIGS_GlobalInventoryObject>& inClass) const {
    return 0;
}

FIGS_GlobalItemTableRow UIGS_GlobalItemsDatabase::GetDataGlobalItem(UObject* inWCO, const TSubclassOf<UIGS_GlobalInventoryObject>& inClass, bool& outSucceeded) {
    return FIGS_GlobalItemTableRow{};
}

FIGS_GlobalItemTableRow UIGS_GlobalItemsDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_GlobalItemTableRow{};
}


