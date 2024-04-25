#include "IGS_GadgetDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_GadgetDatabase::UIGS_GadgetDatabase() {
}

int32 UIGS_GadgetDatabase::GetIndex(const TSubclassOf<UIGS_GadgetInventoryObject>& inClass) const {
    return 0;
}

FIGS_GadgetTableRow UIGS_GadgetDatabase::GetDataGadget(UObject* inWCO, const TSubclassOf<UIGS_GadgetInventoryObject>& inClass, bool& outSucceeded) {
    return FIGS_GadgetTableRow{};
}

FIGS_GadgetTableRow UIGS_GadgetDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_GadgetTableRow{};
}


