#include "IGS_CharacterDatabase.h"

UIGS_CharacterDatabase::UIGS_CharacterDatabase() {
}

void UIGS_CharacterDatabase::ModAppendDataTable(UDataTable* inNewTable) {
}

int32 UIGS_CharacterDatabase::GetNextMutableIndex(UObject* inWCO) {
    return 0;
}

FIGS_MutableProfileData UIGS_CharacterDatabase::GetMutableVariationByIndex(UObject* inWCO, TSoftObjectPtr<UCustomizableObjectPopulation> inCustomizableInstance, int32 inIndex) {
    return FIGS_MutableProfileData{};
}

FIGS_MutableProfile UIGS_CharacterDatabase::GetMutableProfile(UObject* inWCO, TSoftObjectPtr<UCustomizableObjectPopulation> inCustomizableInstance) {
    return FIGS_MutableProfile{};
}

int32 UIGS_CharacterDatabase::GetIndex(EIGS_CharacterID inID) const {
    return 0;
}

FIGS_CharacterTableRow UIGS_CharacterDatabase::GetDataCharacterByTagID(UObject* inWCO, FGameplayTag inTagID, bool& outSucceeded) {
    return FIGS_CharacterTableRow{};
}

FIGS_CharacterTableRow UIGS_CharacterDatabase::GetDataCharacter(UObject* inWCO, EIGS_CharacterID inID, bool& outSucceeded) {
    return FIGS_CharacterTableRow{};
}

FIGS_CharacterTableRow UIGS_CharacterDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FIGS_CharacterTableRow{};
}

TSoftClassPtr<APaperDollAbstract> UIGS_CharacterDatabase::GetCharacterPaperDoll(UObject* inWCO, EIGS_CharacterID inID, int32 inGenericID, bool inIsMaxLeveled, FGameplayTag inCharacterSkinID) {
    return NULL;
}

int32 UIGS_CharacterDatabase::GetCharacterGenericIDFromEntitlements(UObject* inWCO, EIGS_CharacterID inID, int32 inOriginalGenericID) {
    return 0;
}

UIGS_CharacterDatabase* UIGS_CharacterDatabase::GetCharacterDatabaseInstance(UObject* inWCO) {
    return NULL;
}


