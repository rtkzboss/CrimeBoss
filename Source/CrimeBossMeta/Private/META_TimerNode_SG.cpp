#include "META_TimerNode_SG.h"
#include "EMETA_NodeType.h"

UMETA_TimerNode_SG::UMETA_TimerNode_SG() {
    (*this).MinDaysValue = 1;
    (*this).MaxDaysValue = 1;
    (*this).StartingDay = -1;
    (*this).ResultValue = -1;
    (*this).Type = EMETA_NodeType::Timer;
    (*this).bShouldBeResetted = false;
}

void UMETA_TimerNode_SG::SetSaveData(FMETA_TimerNodeSaveData SaveData) {
}

void UMETA_TimerNode_SG::GetSaveData(FMETA_TimerNodeSaveData& SaveData) {
}


