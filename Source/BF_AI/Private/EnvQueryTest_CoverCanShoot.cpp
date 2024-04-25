#include "EnvQueryTest_CoverCanShoot.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_CoverCanShoot::UEnvQueryTest_CoverCanShoot() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->bDrawDebugLines = false;
}


