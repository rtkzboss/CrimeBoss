#include "IGS_ThrowableDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_ThrowableDatabase::UIGS_ThrowableDatabase() {
}

void UIGS_ThrowableDatabase::ModAppendDataTable(UDataTable* inNewTable) {
}

UIGS_ThrowableDatabase* UIGS_ThrowableDatabase::GetThrowableDatabaseInstance(UObject* inWCO) {
    return NULL;
}

int32 UIGS_ThrowableDatabase::GetIndex(const TSubclassOf<UIGS_ThrowableInventoryObject>& inClass) const {
    return 0;
}

FIGS_ThrowableTableRow UIGS_ThrowableDatabase::GetDataThrowable(UObject* inWCO, const TSubclassOf<UIGS_ThrowableInventoryObject>& inClass, bool& outSucceeded) {
    return FIGS_ThrowableTableRow{};
}

FIGS_ThrowableTableRow UIGS_ThrowableDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_ThrowableTableRow{};
}


