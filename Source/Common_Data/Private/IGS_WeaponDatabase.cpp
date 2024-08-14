#include "IGS_WeaponDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_WeaponDatabase::UIGS_WeaponDatabase() {
}

void UIGS_WeaponDatabase::ModAppendDataTable(UDataTable* inNewTable) {
}

FIGS_WeaponTableRow UIGS_WeaponDatabase::GetWeaponDataByTag(UObject* inWCO, FGameplayTag inTag, bool& outSucceeded) {
    return FIGS_WeaponTableRow{};
}

UIGS_WeaponDatabase* UIGS_WeaponDatabase::GetWeaponDatabaseInstance(UObject* inWCO) {
    return NULL;
}

FIGS_WeaponTableRow UIGS_WeaponDatabase::GetWeaponData(UObject* inWCO, const TSubclassOf<UIGS_WeaponInventoryObject>& inClass, bool& outSucceeded) {
    return FIGS_WeaponTableRow{};
}

FIGS_WeaponTableRow UIGS_WeaponDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_WeaponTableRow{};
}


