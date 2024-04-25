#include "META_BossLevelSaveData.h"

FMETA_BossLevelSaveData::FMETA_BossLevelSaveData() {
    this->CurrentBossLevel = 0;
    this->MaxBossPointsToNextLevel = 0;
    this->AccumulatedBossPointsToNextLevel = 0.00f;
    this->RemainingLvlUps = 0;
    this->LastSeenLvlUpScreen = 0;
}

