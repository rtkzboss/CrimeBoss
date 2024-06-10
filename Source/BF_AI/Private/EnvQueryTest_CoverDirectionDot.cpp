#include "EnvQueryTest_CoverDirectionDot.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_CoverDirectionDot::UEnvQueryTest_CoverDirectionDot() {
    (*this).Context = UEnvQueryContext_Querier::StaticClass();
}


