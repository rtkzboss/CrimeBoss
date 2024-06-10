#include "META_GoalSave.h"

FMETA_GoalSave::FMETA_GoalSave() {
    (*this).GoalID = nullptr;
    (*this).Result = EMETA_GoalStatus::None;
    auto& gen2213 = (*this).Missions;
    gen2213.Empty();
    auto& gen2214 = (*this).FinishedInnerTasks;
    gen2214.Empty();
    auto& gen2215 = (*this).ActionCards;
    gen2215.Empty();
}

