#include "META_FinishedMissionInfo.h"

FMETA_FinishedMissionInfo::FMETA_FinishedMissionInfo() {
    this->MissionID = NULL;
    this->MissionOutcome = 0;
    this->BonusCash = 0;
    this->bStealthCompletionFlag = false;
    this->CivilianCasualties = 0;
    this->PoliceCasualties = 0;
    this->BonusObjectiveResult = EMETA_ObjectiveState::InProgress;
    this->Result = EMETA_JobResult::Success;
    this->AmbushResult = EMETA_JobResult::Success;
}

