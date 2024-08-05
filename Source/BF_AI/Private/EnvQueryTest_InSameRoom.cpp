#include "EnvQueryTest_InSameRoom.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_InSameRoom::UEnvQueryTest_InSameRoom() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


