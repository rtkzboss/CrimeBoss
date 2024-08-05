#include "EnvQueryTest_CoverInSameArea.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_CoverInSameArea::UEnvQueryTest_CoverInSameArea() {
    (*this).Depth.DefaultValue = 2;
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


