#include "META_GoalManagerSaveData.h"

FMETA_GoalManagerSaveData::FMETA_GoalManagerSaveData() {
    auto& gen2206 = (*this).StoryGoalsSave;
    gen2206.Empty();
    auto& gen2207 = (*this).MoneyMakingGoalsSave;
    gen2207.Empty();
    auto& gen2208 = (*this).GoalsPools;
    gen2208.Empty();
    auto& gen2209 = (*this).BacklogGoalsPools;
    gen2209.Empty();
    auto& gen2210 = (*this).FinishedGoals;
    gen2210.Empty();
    auto& gen2211 = (*this).GoalsRepeatCounters;
    gen2211.Empty();
}

