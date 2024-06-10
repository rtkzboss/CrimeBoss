#include "EnvQueryTest_AISpawnPointCanBeSeen.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_AISpawnPointCanBeSeen::UEnvQueryTest_AISpawnPointCanBeSeen() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


