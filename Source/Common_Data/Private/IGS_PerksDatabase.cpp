#include "IGS_PerksDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_PerksDatabase::UIGS_PerksDatabase() {
}

FIGS_PerksTableRow UIGS_PerksDatabase::GetPerkDataByTagID(const UObject* inWCO, FGameplayTag inTagID, bool& outSucceeded) {
    return FIGS_PerksTableRow{};
}

FIGS_PerksTableRow UIGS_PerksDatabase::GetPerkData(const UObject* inWCO, const TSubclassOf<UIGS_GameplayEffect_PerkBase>& inClass, bool& outSucceeded) {
    return FIGS_PerksTableRow{};
}

int32 UIGS_PerksDatabase::GetIndex(const TSubclassOf<UIGS_GameplayEffect_PerkBase>& inClass) const {
    return 0;
}

FIGS_PerksTableRow UIGS_PerksDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_PerksTableRow{};
}


