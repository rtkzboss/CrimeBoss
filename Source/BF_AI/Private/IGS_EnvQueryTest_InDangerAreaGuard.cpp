#include "IGS_EnvQueryTest_InDangerAreaGuard.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UIGS_EnvQueryTest_InDangerAreaGuard::UIGS_EnvQueryTest_InDangerAreaGuard() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


