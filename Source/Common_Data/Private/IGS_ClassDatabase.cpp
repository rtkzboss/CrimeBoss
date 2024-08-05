#include "IGS_ClassDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_ClassDatabase::UIGS_ClassDatabase() {
}

int32 UIGS_ClassDatabase::GetIndex(const TSubclassOf<UIGS_GameplayEffect_Class>& inClass) const {
    return 0;
}

FIGS_ClassTableRow UIGS_ClassDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_ClassTableRow{};
}

FIGS_ClassTableRow UIGS_ClassDatabase::GetClassData(const UObject* inWCO, const TSubclassOf<UIGS_GameplayEffect_Class>& inClass, bool& outSucceeded) {
    return FIGS_ClassTableRow{};
}


