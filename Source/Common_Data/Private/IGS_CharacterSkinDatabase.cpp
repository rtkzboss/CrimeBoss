#include "IGS_CharacterSkinDatabase.h"

UIGS_CharacterSkinDatabase::UIGS_CharacterSkinDatabase() {
}

void UIGS_CharacterSkinDatabase::ModAppendDataTable(UDataTable* inNewTable) {
}

int32 UIGS_CharacterSkinDatabase::GetIndex(FGameplayTag inID) const {
    return 0;
}

FIGS_CharacterSkinTableRow UIGS_CharacterSkinDatabase::GetDataCharacterSkin(UObject* inWCO, FGameplayTag inID, bool& outSucceeded) {
    return FIGS_CharacterSkinTableRow{};
}

FIGS_CharacterSkinTableRow UIGS_CharacterSkinDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_CharacterSkinTableRow{};
}

UIGS_CharacterSkinDatabase* UIGS_CharacterSkinDatabase::GetCharacterSkinDatabaseInstance(UObject* inWCO) {
    return NULL;
}

TSoftClassPtr<APaperDollAbstract> UIGS_CharacterSkinDatabase::GetCharacterPaperDoll(UObject* inWCO, FGameplayTag inID) {
    return NULL;
}


