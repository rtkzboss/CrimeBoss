#include "META_Goal.h"

FMETA_Goal::FMETA_Goal() {
    this->bIsGoalRepeatable = false;
    this->DaysBetweenAttempts = 0;
    this->MinRespectWhenGoalAvailableForPlayer = 0;
    this->Result = EMETA_GoalStatus::None;
    this->SelectedActionCardNumber = 0;
    this->RespectByDefault = 0;
    this->InstigatorPartner = EMETA_Partner::None;
    this->Purpose = EMETA_GoalPurpose::INVALID;
}

