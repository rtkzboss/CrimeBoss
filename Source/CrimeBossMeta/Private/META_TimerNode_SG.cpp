#include "META_TimerNode_SG.h"
#include "EMETA_NodeType.h"

UMETA_TimerNode_SG::UMETA_TimerNode_SG() {
    this->Type = EMETA_NodeType::Timer;
    this->bShouldBeResetted = false;
    this->MinDaysValue = 1;
    this->MaxDaysValue = 1;
    this->ContinueAfter = EMETA_EventTime::DayStart;
    this->StartingDay = -1;
    this->ResultValue = -1;
}

void UMETA_TimerNode_SG::SetSaveData(FMETA_TimerNodeSaveData SaveData) {
}

void UMETA_TimerNode_SG::GetSaveData(FMETA_TimerNodeSaveData& SaveData) {
}


