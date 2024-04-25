#include "EnvQueryTest_ConeFilter.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_ConeFilter::UEnvQueryTest_ConeFilter() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->bDrawDebugLines = false;
}


