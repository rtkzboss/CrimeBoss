#include "EnvQueryTest_InScriptAllowedAreaBase.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_InScriptAllowedAreaBase::UEnvQueryTest_InScriptAllowedAreaBase() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


