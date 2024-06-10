#include "META_BossLevelSaveData.h"

FMETA_BossLevelSaveData::FMETA_BossLevelSaveData() {
    (*this).CurrentBossLevel = 0;
    (*this).MaxBossPointsToNextLevel = 0;
    (*this).AccumulatedBossPointsToNextLevel = 0.000000000e+00f;
    auto& gen1707 = (*this).PreparedBonuses;
    gen1707.Empty();
    (*this).RemainingLvlUps = 0;
    (*this).LastSeenLvlUpScreen = 1;
}

