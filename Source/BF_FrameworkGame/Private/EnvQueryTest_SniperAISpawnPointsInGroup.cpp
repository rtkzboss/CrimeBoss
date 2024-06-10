#include "EnvQueryTest_SniperAISpawnPointsInGroup.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_SniperAISpawnPointsInGroup::UEnvQueryTest_SniperAISpawnPointsInGroup() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


