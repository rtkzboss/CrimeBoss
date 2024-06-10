#include "META_CampaignUserDifficultyConfiguration.h"

FMETA_CampaignUserDifficultyConfiguration::FMETA_CampaignUserDifficultyConfiguration() {
    (*this).Label = NAME_None;
    (*this).FPSDifficulty = EIGS_FPSDifficulty::FD_Normal;
    (*this).FinalScoreBaseMultiplier = 1.000000000e+00f;
    (*this).BigHeistDifficultyOverride = EIGS_ScenarioDifficulty::SD_Unknown;
}

