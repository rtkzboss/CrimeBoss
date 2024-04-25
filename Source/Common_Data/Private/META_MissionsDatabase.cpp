#include "META_MissionsDatabase.h"
#include "Templates/SubclassOf.h"

UMETA_MissionsDatabase::UMETA_MissionsDatabase() {
}

bool UMETA_MissionsDatabase::IsItTurfWarMissionID(const TSubclassOf<UMETA_MissionID>& inMissionID, EMETA_JobType& outMissionType) const {
    return false;
}

TArray<FMETA_MoneyMakingMissionMainDataFromDatabase> UMETA_MissionsDatabase::GetMoneyMakingMissionIDsWithLootType(const UObject* inWCO, FGameplayTag inLootType) {
    return TArray<FMETA_MoneyMakingMissionMainDataFromDatabase>();
}

UMETA_BaseMission* UMETA_MissionsDatabase::GetMissionObject(const UObject* inWCO, TSubclassOf<UMETA_MissionID> inMissionID) {
    return NULL;
}

TSubclassOf<UMETA_MissionID> UMETA_MissionsDatabase::GetMissionIDByTurfWarTypeAndDistrict(EMETA_TurfWarMissionType inTurfWarType, EIGS_HubBackdropTypes inBackdropType) const {
    return NULL;
}

TSubclassOf<UMETA_MissionID> UMETA_MissionsDatabase::GetMissionIDByTurfWarType(EMETA_TurfWarMissionType inTurfWarType) const {
    return NULL;
}

TSubclassOf<UMETA_MissionID> UMETA_MissionsDatabase::GetMissionIDByTradeVendor(EMETA_TradeVendor inVendor) const {
    return NULL;
}

FMETA_MissionDatabase UMETA_MissionsDatabase::GetMissionDataBP(const UObject* inWCO, TSubclassOf<UMETA_MissionID> inClass, bool& outSucceeded) {
    return FMETA_MissionDatabase{};
}

TArray<TSubclassOf<UMETA_MissionID>> UMETA_MissionsDatabase::GetFpsMissionsIdsWithSubType(EMETA_FPSMissionSubtype inFPSMissionSubtype) {
    return TArray<TSubclassOf<UMETA_MissionID>>();
}

FMETA_FPSMissionInfo UMETA_MissionsDatabase::GetFPSMissionInfoBP(TSubclassOf<UMETA_MissionID> inMissionID, bool& outSucceeded) {
    return FMETA_FPSMissionInfo{};
}

TSubclassOf<UMETA_MissionID> UMETA_MissionsDatabase::GetAmbushMission(TSubclassOf<UMETA_MissionID> inMissionID, bool& outSucceeded) {
    return NULL;
}

FGameplayTag UMETA_MissionsDatabase::GetAmbushChanceTagByMissionID(TSubclassOf<UMETA_MissionID> inMissionID) {
    return FGameplayTag{};
}

TArray<FMETA_MissionDatabase> UMETA_MissionsDatabase::GetAllFPSMissions() {
    return TArray<FMETA_MissionDatabase>();
}

bool UMETA_MissionsDatabase::GenerateMissionObjectiveBP(const UObject* inWCO, const UMETA_BaseMission* inMission, FMETA_ObjectiveTableRow& outBonusObjective, FMETA_ObjectiveRewardData& outRewardData) {
    return false;
}

bool UMETA_MissionsDatabase::CanMissionBeRemovedFromTheMap(const UObject* inWCO, TSubclassOf<UMETA_MissionID> inMissionID, EMETA_JobResult inJobResult) {
    return false;
}


