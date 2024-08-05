#include "IGS_MeleeWeaponDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_MeleeWeaponDatabase::UIGS_MeleeWeaponDatabase() {
}

int32 UIGS_MeleeWeaponDatabase::GetIndex(const TSubclassOf<UIGS_MeleeWeaponInventoryObject>& inClass) const {
    return 0;
}

FIGS_MeleeWeaponTableRow UIGS_MeleeWeaponDatabase::GetDataMeleeWeapon(UObject* inWCO, const TSubclassOf<UIGS_MeleeWeaponInventoryObject>& inClass, bool& outSucceeded) {
    return FIGS_MeleeWeaponTableRow{};
}

FIGS_MeleeWeaponTableRow UIGS_MeleeWeaponDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_MeleeWeaponTableRow{};
}


