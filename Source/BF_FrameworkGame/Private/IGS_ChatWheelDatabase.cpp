#include "IGS_ChatWheelDatabase.h"

UIGS_ChatWheelDatabase::UIGS_ChatWheelDatabase() {
}

void UIGS_ChatWheelDatabase::SetLastIconText(FText InText) {
}

FText UIGS_ChatWheelDatabase::GetLastIconText() const {
    return FText::GetEmpty();
}

int32 UIGS_ChatWheelDatabase::GetIndex(FGameplayTag inID) const {
    return 0;
}

FIGS_ChatWheelDataRow UIGS_ChatWheelDatabase::GetDataChatWheel(UObject* inWCO, FGameplayTag inID, bool& outSucceeded) {
    return FIGS_ChatWheelDataRow{};
}

FIGS_ChatWheelDataRow UIGS_ChatWheelDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_ChatWheelDataRow{};
}

TArray<FIGS_ChatWheelDataRow> UIGS_ChatWheelDatabase::GetDatabaseTableBP() const {
    return TArray<FIGS_ChatWheelDataRow>();
}


