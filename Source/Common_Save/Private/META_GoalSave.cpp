#include "META_GoalSave.h"

FMETA_GoalSave::FMETA_GoalSave() {
    (*this).GoalID = nullptr;
    (*this).Result = EMETA_GoalStatus::None;
    (*this).Missions.Empty();
    (*this).FinishedInnerTasks.Empty();
    (*this).ActionCards.Empty();
}

