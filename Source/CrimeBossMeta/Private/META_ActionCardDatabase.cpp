#include "META_ActionCardDatabase.h"

UMETA_ActionCardDatabase::UMETA_ActionCardDatabase() {
}

int32 UMETA_ActionCardDatabase::GetIndex(const TSoftClassPtr<UMETA_BaseActionCard>& inClass) const {
    return 0;
}

FMETA_ActionCardTableRow UMETA_ActionCardDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FMETA_ActionCardTableRow{};
}

TArray<FMETA_ActionCardTableRow> UMETA_ActionCardDatabase::GetDatabaseTableBP() {
    return TArray<FMETA_ActionCardTableRow>();
}

TArray<TSoftClassPtr<UMETA_BaseActionCard>> UMETA_ActionCardDatabase::GetDatabaseIDs() {
    return TArray<TSoftClassPtr<UMETA_BaseActionCard>>();
}

FMETA_ActionCardTableRow UMETA_ActionCardDatabase::GetDataActionCard(UObject* inWCO, TSoftClassPtr<UMETA_BaseActionCard> inClass, bool& outSucceeded) {
    return FMETA_ActionCardTableRow{};
}


