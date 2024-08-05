#include "EnvQueryGenerator_CombatCirlcle.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_CombatCirlcle::UEnvQueryGenerator_CombatCirlcle() {
    (*this).Radius.DefaultValue = 5.000000000e+02f;
    (*this).SpaceBetweenFront.DefaultValue = 1.500000000e+02f;
    (*this).GenerateAround = UEnvQueryContext_Querier::StaticClass();
}


