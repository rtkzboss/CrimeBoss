#include "META_FinishedGoal.h"

FMETA_FinishedGoal::FMETA_FinishedGoal() {
    (*this).ID = nullptr;
    (*this).GoalResult = EMETA_GoalStatus::None;
    auto& gen1738 = (*this).ActionCards;
    gen1738.Empty();
    (*this).SelectedActionCardNumber = 0;
}

