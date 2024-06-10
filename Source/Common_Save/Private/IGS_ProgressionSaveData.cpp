#include "IGS_ProgressionSaveData.h"

FIGS_ProgressionSaveData::FIGS_ProgressionSaveData() {
    (*this).ProgressLevel = 0;
    (*this).ProgressToNextLevel = 0.000000000e+00f;
    (*this).PendingUnlockedLevelUps = 0;
    (*this).PendingUnlockedItems.Empty();
    (*this).UnlockedRewardsHistory.Empty();
}

