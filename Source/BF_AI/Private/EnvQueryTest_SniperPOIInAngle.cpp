#include "EnvQueryTest_SniperPOIInAngle.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_SniperPOIInAngle::UEnvQueryTest_SniperPOIInAngle() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


