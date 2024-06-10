#include "EnvQueryTest_AISpawnPointsAreActiveInGroup.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_AISpawnPointsAreActiveInGroup::UEnvQueryTest_AISpawnPointsAreActiveInGroup() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


