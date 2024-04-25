#include "IGS_GenericItemsDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_GenericItemsDatabase::UIGS_GenericItemsDatabase() {
}

int32 UIGS_GenericItemsDatabase::GetIndex(const TSubclassOf<UIGS_GenericItemsInventoryObject>& inClass) const {
    return 0;
}

FIGS_GenericItemsTableRow UIGS_GenericItemsDatabase::GetDataGenericItem(UObject* inWCO, const TSubclassOf<UIGS_GenericItemsInventoryObject>& inClass, bool& outSucceeded) {
    return FIGS_GenericItemsTableRow{};
}

FIGS_GenericItemsTableRow UIGS_GenericItemsDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_GenericItemsTableRow{};
}


