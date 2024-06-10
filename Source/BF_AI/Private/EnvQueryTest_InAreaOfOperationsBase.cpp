#include "EnvQueryTest_InAreaOfOperationsBase.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_InAreaOfOperationsBase::UEnvQueryTest_InAreaOfOperationsBase() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


