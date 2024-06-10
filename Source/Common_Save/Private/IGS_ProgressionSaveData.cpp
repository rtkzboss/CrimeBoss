#include "IGS_ProgressionSaveData.h"

FIGS_ProgressionSaveData::FIGS_ProgressionSaveData() {
    (*this).ProgressLevel = 0;
    (*this).ProgressToNextLevel = 0.000000000e+00f;
    (*this).PendingUnlockedLevelUps = 0;
    auto& gen2132 = (*this).PendingUnlockedItems;
    gen2132.Empty();
    auto& gen2133 = (*this).UnlockedRewardsHistory;
    gen2133.Empty();
}

