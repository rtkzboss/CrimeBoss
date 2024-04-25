#include "EnvQueryTest_AISpawnPointIsActive.h"

UEnvQueryTest_AISpawnPointIsActive::UEnvQueryTest_AISpawnPointIsActive() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
}


