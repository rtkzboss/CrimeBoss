#include "EnvQueryTest_InDangerArea.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_InDangerArea::UEnvQueryTest_InDangerArea() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


