#include "IGS_UserDifficulty.h"

FIGS_UserDifficulty::FIGS_UserDifficulty() {
    this->ScenarioDifficulty = EIGS_ScenarioDifficulty::SD_Unknown;
    this->FPSDifficulty = EIGS_FPSDifficulty::FD_Unknown;
    this->Heat = EMETA_Heat::INVALID;
    this->PrimaryEnemyTier = EIGS_AITiers::AT_Tier1;
    this->SWATTier = EIGS_AITiers::AT_Tier1;
    this->AllyTier = EIGS_AITiers::AT_Tier1;
}

