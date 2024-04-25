#include "EnvQueryTest_IsCharacterOfTeamSide.h"

UEnvQueryTest_IsCharacterOfTeamSide::UEnvQueryTest_IsCharacterOfTeamSide() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TeamSide = EIGS_TeamSideEnum::TS_Unknown;
}


