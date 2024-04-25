#include "IGS_CharacterMaskDatabase.h"
#include "Templates/SubclassOf.h"

UIGS_CharacterMaskDatabase::UIGS_CharacterMaskDatabase() {
}

int32 UIGS_CharacterMaskDatabase::GetIndex(TSubclassOf<UIGS_CharacterMaskBase> inID) const {
    return 0;
}

FIGS_CharacterMaskTableRow UIGS_CharacterMaskDatabase::GetDataCharacterMask(UObject* inWCO, TSubclassOf<UIGS_CharacterMaskBase> inID, bool& outSucceeded) {
    return FIGS_CharacterMaskTableRow{};
}

FIGS_CharacterMaskTableRow UIGS_CharacterMaskDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_CharacterMaskTableRow{};
}


