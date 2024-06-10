#include "EnvQueryTest_CoverCrossingLineOfFire.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_CoverCrossingLineOfFire::UEnvQueryTest_CoverCrossingLineOfFire() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).BoolValue.DefaultValue = false;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


