#include "EnvQueryTest_ThreatPointPriority.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_ThreatPointPriority::UEnvQueryTest_ThreatPointPriority() {
    (*this).Context = UEnvQueryContext_Querier::StaticClass();
    (*this).LowPrioScore.DefaultValue = 1.000000000e+00f;
    (*this).HighPrioScore.DefaultValue = 2.000000000e+00f;
}


