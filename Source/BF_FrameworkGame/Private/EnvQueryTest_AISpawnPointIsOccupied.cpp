#include "EnvQueryTest_AISpawnPointIsOccupied.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_AISpawnPointIsOccupied::UEnvQueryTest_AISpawnPointIsOccupied() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


