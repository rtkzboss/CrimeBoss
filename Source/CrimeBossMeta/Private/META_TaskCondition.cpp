#include "META_TaskCondition.h"

UMETA_TaskCondition::UMETA_TaskCondition() {
}

void UMETA_TaskCondition::SetStativeInformation(AMETA_BaseGameMode* inGameMode, FMETA_TaskStativeInfo inTaskStativeInfo) {
}

void UMETA_TaskCondition::SetNeedValue(EMETA_NeedValueType inNeedValueType, int32 inNeedValue, FGameplayTag inNeedValueTag) {
}

void UMETA_TaskCondition::RefreshValues_Implementation() {
}

int32 UMETA_TaskCondition::GetNeedValue_Implementation() {
    return 0;
}

TSoftObjectPtr<UMETA_BaseStoryGraphManager> UMETA_TaskCondition::GetGraphSoftObjectCurrentNodeOwner() {
    return NULL;
}

void UMETA_TaskCondition::BindUnbindDelegates_Implementation(bool inBind) {
}


