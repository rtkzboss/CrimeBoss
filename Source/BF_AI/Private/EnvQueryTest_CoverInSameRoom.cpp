#include "EnvQueryTest_CoverInSameRoom.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_CoverInSameRoom::UEnvQueryTest_CoverInSameRoom() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


