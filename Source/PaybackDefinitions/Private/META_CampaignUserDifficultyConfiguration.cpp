#include "META_CampaignUserDifficultyConfiguration.h"

FMETA_CampaignUserDifficultyConfiguration::FMETA_CampaignUserDifficultyConfiguration() {
    this->FPSDifficulty = EIGS_FPSDifficulty::FD_Unknown;
    this->FinalScoreBaseMultiplier = 0.00f;
    this->BigHeistDifficultyOverride = EIGS_ScenarioDifficulty::SD_Unknown;
}

