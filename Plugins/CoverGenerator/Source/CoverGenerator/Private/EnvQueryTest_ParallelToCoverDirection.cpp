#include "EnvQueryTest_ParallelToCoverDirection.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_ParallelToCoverDirection::UEnvQueryTest_ParallelToCoverDirection() {
    (*this).Context = UEnvQueryContext_Querier::StaticClass();
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


