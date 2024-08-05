#include "IGS_DataConverter.h"

UIGS_DataConverter::UIGS_DataConverter() {
}

FMETA_MissionsSave UIGS_DataConverter::ConvertQuickplayMissionsToSave(TArray<UMETA_BaseMission*> inMissions) {
    return FMETA_MissionsSave{};
}

TArray<UMETA_BaseMission*> UIGS_DataConverter::ConvertQuickplayMissionsFromSave(const UObject* inWCO, FMETA_MissionsSave& inMissions) {
    return TArray<UMETA_BaseMission*>();
}

FMETA_MissionsSave UIGS_DataConverter::ConvertChainMissionsToSave(TArray<UMETA_BaseMission*> inMissions) {
    return FMETA_MissionsSave{};
}

TArray<UMETA_BaseMission*> UIGS_DataConverter::ConvertChainMissionsFromSave(const UObject* inWCO, FMETA_MissionsSave& inMissions) {
    return TArray<UMETA_BaseMission*>();
}


