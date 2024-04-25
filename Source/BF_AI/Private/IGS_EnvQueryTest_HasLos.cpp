#include "IGS_EnvQueryTest_HasLos.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UIGS_EnvQueryTest_HasLos::UIGS_EnvQueryTest_HasLos() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


