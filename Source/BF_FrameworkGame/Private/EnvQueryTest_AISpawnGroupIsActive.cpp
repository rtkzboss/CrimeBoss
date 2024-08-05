#include "EnvQueryTest_AISpawnGroupIsActive.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_AISpawnGroupIsActive::UEnvQueryTest_AISpawnGroupIsActive() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


