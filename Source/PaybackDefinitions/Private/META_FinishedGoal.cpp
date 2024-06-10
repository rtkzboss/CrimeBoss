#include "META_FinishedGoal.h"

FMETA_FinishedGoal::FMETA_FinishedGoal() {
    (*this).ID = nullptr;
    (*this).GoalResult = EMETA_GoalStatus::None;
    (*this).ActionCards.Empty();
    (*this).SelectedActionCardNumber = 0;
}

