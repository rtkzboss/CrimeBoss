#include "META_MoneyMakingGoalData.h"

FMETA_MoneyMakingGoalData::FMETA_MoneyMakingGoalData() {
    this->Result = EMETA_GoalStatus::None;
    this->InstigatorPartner = EMETA_Partner::None;
    this->MonetaryValue = 0;
    this->EnemyGangIDs = 0;
    this->Purpose = EMETA_GoalPurpose::INVALID;
}

