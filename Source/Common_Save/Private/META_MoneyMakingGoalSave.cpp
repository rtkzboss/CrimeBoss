#include "META_MoneyMakingGoalSave.h"
#include "EMETA_TaskStatus.h"

FMETA_MoneyMakingGoalSave::FMETA_MoneyMakingGoalSave() {
    (*this).GoalID = nullptr;
    (*this).Task.ID = 0;
    (*this).Task.CurrentValue = 0;
    (*this).Task.Status = EMETA_TaskStatus::None;
    (*this).Missions.Empty();
    (*this).MonetaryValue = 0;
    (*this).Result = EMETA_GoalStatus::None;
}

