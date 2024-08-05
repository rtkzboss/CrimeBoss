#include "EnvQueryTest_AISpawnGroupIsOnCoolDown.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_AISpawnGroupIsOnCoolDown::UEnvQueryTest_AISpawnGroupIsOnCoolDown() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


