#include "EnvQueryTest_InRoomSecurityType.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_InRoomSecurityType::UEnvQueryTest_InRoomSecurityType() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


