#include "EnvQueryTest_IsZiptiedByOther.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_IsZiptiedByOther::UEnvQueryTest_IsZiptiedByOther() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


