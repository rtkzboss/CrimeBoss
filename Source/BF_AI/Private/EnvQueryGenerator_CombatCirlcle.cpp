#include "EnvQueryGenerator_CombatCirlcle.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_CombatCirlcle::UEnvQueryGenerator_CombatCirlcle() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
    this->TraceChannel = TraceTypeQuery1;
}


