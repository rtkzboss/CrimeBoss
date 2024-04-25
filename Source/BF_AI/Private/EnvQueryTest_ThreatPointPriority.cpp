#include "EnvQueryTest_ThreatPointPriority.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_ThreatPointPriority::UEnvQueryTest_ThreatPointPriority() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->bDrawDebugLines = false;
}


