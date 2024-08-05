#include "META_RandEventsDatabase.h"
#include "Templates/SubclassOf.h"

UMETA_RandEventsDatabase::UMETA_RandEventsDatabase() {
}

TArray<FMETA_RandEventTableRow> UMETA_RandEventsDatabase::GetSuitableEvents(const UObject* inWCO, EMETA_RandEventCategory inEventsCategory, EMETA_RespectLvl inRespectLvl, EMETA_Heat inCurrentHeat, int32 inCurrentBalance, FGameplayTagContainer inStorylineAssets, bool inCheckChance) {
    return TArray<FMETA_RandEventTableRow>();
}

TArray<FMETA_RandEventReward> UMETA_RandEventsDatabase::GetEventRewards(FGameplayTag inEventID) {
    return TArray<FMETA_RandEventReward>();
}

TSubclassOf<UMETA_MissionID> UMETA_RandEventsDatabase::GetEventMission(FGameplayTag inEventID) {
    return NULL;
}

FMETA_RandEventTableRow UMETA_RandEventsDatabase::GetEventInfo(FGameplayTag inEventID, bool& outSuccess) {
    return FMETA_RandEventTableRow{};
}

void UMETA_RandEventsDatabase::GetEventCutsceneData(FGameplayTag inEventID, EMETA_Gang inGangForCutscene, FText& outCutsceneID, FText& outDebugText) {
}

int32 UMETA_RandEventsDatabase::GetEventCost(FGameplayTag inEventID, EMETA_RespectLvl inRespectLvl) {
    return 0;
}

EMETA_RandEventCategory UMETA_RandEventsDatabase::GetEventCategory(FGameplayTag inEventID) {
    return EMETA_RandEventCategory::None;
}


