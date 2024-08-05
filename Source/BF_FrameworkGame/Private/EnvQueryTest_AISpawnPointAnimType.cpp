#include "EnvQueryTest_AISpawnPointAnimType.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_AISpawnPointAnimType::UEnvQueryTest_AISpawnPointAnimType() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


