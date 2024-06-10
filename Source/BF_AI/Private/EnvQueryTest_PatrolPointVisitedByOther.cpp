#include "EnvQueryTest_PatrolPointVisitedByOther.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_PatrolPointVisitedByOther::UEnvQueryTest_PatrolPointVisitedByOther() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


