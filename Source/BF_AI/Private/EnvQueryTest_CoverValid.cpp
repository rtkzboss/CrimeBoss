#include "EnvQueryTest_CoverValid.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_CoverValid::UEnvQueryTest_CoverValid() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


