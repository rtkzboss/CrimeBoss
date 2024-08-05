#include "EnvQueryTest_CoverIsStanding.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_CoverIsStanding::UEnvQueryTest_CoverIsStanding() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


