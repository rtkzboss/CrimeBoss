#include "META_GoalDatabase.h"
#include "Templates/SubclassOf.h"

UMETA_GoalDatabase::UMETA_GoalDatabase() {
}

void UMETA_GoalDatabase::GetPreparedGoalData(UObject* inWCO, TSubclassOf<UMETA_BaseGoal> inClass, bool& outSucceeded, bool& outUseLockRespectCondition, EMETA_RespectLvl& outUnlockRespect, EMETA_RespectLvl& outLockRespect, EMETA_Partner& outInstigatorPartner) {
}

TArray<FMETA_GoalTableRow> UMETA_GoalDatabase::GetMoneyMakingGoalsForPartner(EMETA_Partner inPartner) {
    return TArray<FMETA_GoalTableRow>();
}

int32 UMETA_GoalDatabase::GetIndex(const TSubclassOf<UMETA_BaseGoal>& inClass) const {
    return 0;
}

EMETA_GoalType UMETA_GoalDatabase::GetGoalType(TSubclassOf<UMETA_BaseGoal> inGoalID) {
    return EMETA_GoalType::INVALID;
}

UMETA_BaseGoal* UMETA_GoalDatabase::GetGoalObject(const UObject* inWCO, TSubclassOf<UMETA_BaseGoal> inGoalID) {
    return NULL;
}

void UMETA_GoalDatabase::GetGoalIDByGraph(UObject* inWCO, TSoftObjectPtr<UStoryGraphManager> inGraph, bool& outSucceeded, TSubclassOf<UMETA_BaseGoal>& outClass) {
}

FMETA_GoalTableRow UMETA_GoalDatabase::GetGoalData(UObject* inWCO, TSubclassOf<UMETA_BaseGoal> inClass, bool& outSucceeded) {
    return FMETA_GoalTableRow{};
}

FMETA_GoalTableRow UMETA_GoalDatabase::GetDataByIndexBP(int32 inIndex, bool& outSucceeded) const {
    return FMETA_GoalTableRow{};
}

TArray<FMETA_GoalTableRow> UMETA_GoalDatabase::GetDatabaseTableBP() {
    return TArray<FMETA_GoalTableRow>();
}

TArray<TSubclassOf<UMETA_BaseGoal>> UMETA_GoalDatabase::GetDatabaseIDs() {
    return TArray<TSubclassOf<UMETA_BaseGoal>>();
}


