#include "EnvQueryTest_CoverAngle.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_CoverAngle::UEnvQueryTest_CoverAngle() {
    (*this).Context = UEnvQueryContext_Querier::StaticClass();
    (*this).CombatRangeMin = 6.000000000e+02f;
    (*this).CombatRangeMax = 1.500000000e+03f;
}


