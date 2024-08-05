#include "EnvQueryTest_CoverLocked.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_CoverLocked::UEnvQueryTest_CoverLocked() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


