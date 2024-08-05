#include "EnvQueryTest_CanBeZiptied.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_CanBeZiptied::UEnvQueryTest_CanBeZiptied() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


