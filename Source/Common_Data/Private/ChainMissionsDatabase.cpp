#include "ChainMissionsDatabase.h"
#include "Templates/SubclassOf.h"

UChainMissionsDatabase::UChainMissionsDatabase() {
}

TArray<TSubclassOf<UMETA_MissionID>> UChainMissionsDatabase::GetMoneyMakingChainMissionIDsWithLootTypeByUnlockRespect(const UObject* inWCO, FGameplayTag inLootType, EMETA_RespectLvl inUnlockRespect) {
    return TArray<TSubclassOf<UMETA_MissionID>>();
}

TArray<TSubclassOf<UMETA_MissionID>> UChainMissionsDatabase::GetFpsMissionsIdsWithSubType(EMETA_FPSMissionSubtype inFPSMissionSubtype) {
    return TArray<TSubclassOf<UMETA_MissionID>>();
}

FMETA_FPSMissionInfo UChainMissionsDatabase::GetFPSMissionInfoBP(TSubclassOf<UMETA_MissionID> inMissionID, bool& outSucceeded) {
    return FMETA_FPSMissionInfo{};
}

UMETA_BaseMission* UChainMissionsDatabase::GetChainMissionObject(const UObject* inWCO, TSubclassOf<UMETA_MissionID> inMissionID) {
    return NULL;
}

FMETA_MissionDatabase UChainMissionsDatabase::GetChainMissionDataBP(const UObject* inWCO, TSubclassOf<UMETA_MissionID> inClass, bool& outSucceeded) {
    return FMETA_MissionDatabase{};
}


