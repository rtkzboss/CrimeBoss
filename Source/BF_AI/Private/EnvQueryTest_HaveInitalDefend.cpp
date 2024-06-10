#include "EnvQueryTest_HaveInitalDefend.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_HaveInitalDefend::UEnvQueryTest_HaveInitalDefend() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


