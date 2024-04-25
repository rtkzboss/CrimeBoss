#include "IGS_CarryableDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_CarryableDatabase::UIGS_CarryableDatabase() {
}

int32 UIGS_CarryableDatabase::GetIndex(const TSubclassOf<UIGS_CarryableInventoryObject>& inClass) const {
    return 0;
}

FIGS_CarryableTableRow UIGS_CarryableDatabase::GetDataCarryable(const UObject* inWCO, const TSubclassOf<UIGS_CarryableInventoryObject>& inClass, bool& outSucceeded) {
    return FIGS_CarryableTableRow{};
}

FIGS_CarryableTableRow UIGS_CarryableDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_CarryableTableRow{};
}


