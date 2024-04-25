#include "META_StoryGoalTableRow.h"

FMETA_StoryGoalTableRow::FMETA_StoryGoalTableRow() {
    this->bIsGoalRepeatable = false;
    this->DaysBetweenAttempts = 0;
    this->RespectByDefault = 0;
    this->UseLockRespectCondition = false;
    this->UnlockRespect = EMETA_RespectLvl::Low;
    this->LockRespect = EMETA_RespectLvl::Low;
    this->InstigatorPartner = EMETA_Partner::None;
}

