#include "EnvQueryTest_CoverAngle.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_CoverAngle::UEnvQueryTest_CoverAngle() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->CombatRangeMin = 600.00f;
    this->CombatRangeMax = 1500.00f;
}


