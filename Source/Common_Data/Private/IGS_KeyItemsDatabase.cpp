#include "IGS_KeyItemsDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_KeyItemsDatabase::UIGS_KeyItemsDatabase() {
}

int32 UIGS_KeyItemsDatabase::GetIndex(const TSubclassOf<UIGS_KeyItemInventoryObject>& inClass) const {
    return 0;
}

FIGS_KeyItemTableRow UIGS_KeyItemsDatabase::GetDataKeyItem(UObject* inWCO, const TSubclassOf<UIGS_KeyItemInventoryObject>& inClass, bool& outSucceeded) {
    return FIGS_KeyItemTableRow{};
}

FIGS_KeyItemTableRow UIGS_KeyItemsDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_KeyItemTableRow{};
}


