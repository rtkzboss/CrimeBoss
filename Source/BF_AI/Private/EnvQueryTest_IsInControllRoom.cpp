#include "EnvQueryTest_IsInControllRoom.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_IsInControllRoom::UEnvQueryTest_IsInControllRoom() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


