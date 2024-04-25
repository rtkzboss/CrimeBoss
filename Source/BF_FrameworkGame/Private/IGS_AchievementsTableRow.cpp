#include "IGS_AchievementsTableRow.h"

FIGS_AchievementsTableRow::FIGS_AchievementsTableRow() {
    this->Type = EIGS_AchievementType::PerAccount;
    this->InitialValue = 0;
    this->UnlockValue = 0;
    this->SetupUnlockValue = 0;
    this->ValuesDivisor = 0;
    this->Award = EIGS_AchievementAward::Bronze;
    this->EpicXPs = 0;
    this->XboxGamerscore = 0;
    this->PS5Trophies = 0;
    this->Hidden = false;
}

