#include "IGS_MenuBackgroundDatabase.h"

UIGS_MenuBackgroundDatabase::UIGS_MenuBackgroundDatabase() {
    this->AkStatesDataAsset = NULL;
    this->isDebugEnabled = false;
}

TArray<FText> UIGS_MenuBackgroundDatabase::GetSelectableMenuBackgroundsNames() const {
    return TArray<FText>();
}

int32 UIGS_MenuBackgroundDatabase::GetIndex(FGameplayTag inID) const {
    return 0;
}

FIGS_MenuBackgroundTableRow UIGS_MenuBackgroundDatabase::GetDataMenuBackground(UObject* inWCO, FGameplayTag inID, bool& outSucceeded) {
    return FIGS_MenuBackgroundTableRow{};
}

FIGS_MenuBackgroundTableRow UIGS_MenuBackgroundDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_MenuBackgroundTableRow{};
}

TArray<FIGS_MenuBackgroundTableRow> UIGS_MenuBackgroundDatabase::GetDatabaseTableBP() const {
    return TArray<FIGS_MenuBackgroundTableRow>();
}

UAkStateValue* UIGS_MenuBackgroundDatabase::GetAkStateForTag(FGameplayTag inID) {
    return NULL;
}

void UIGS_MenuBackgroundDatabase::EnableDebugMode() {
}


