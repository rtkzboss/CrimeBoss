#include "IGS_ModDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_ModDatabase::UIGS_ModDatabase() {
}

void UIGS_ModDatabase::ModAppendDataTable(UDataTable* inNewTable) {
}

UIGS_ModDatabase* UIGS_ModDatabase::GetModDatabaseInstance(UObject* inWCO) {
    return NULL;
}

FIGS_ModTableRow UIGS_ModDatabase::GetModData(UObject* inWCO, const TSubclassOf<UIGS_ModInventoryObject>& inClass, bool& outSucceeded) {
    return FIGS_ModTableRow{};
}


