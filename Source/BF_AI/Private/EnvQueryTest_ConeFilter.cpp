#include "EnvQueryTest_ConeFilter.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_ConeFilter::UEnvQueryTest_ConeFilter() {
    (*this).InnerConeAngle.DefaultValue = 1.200000000e+02f;
    (*this).InnerConeScore.DefaultValue = 1.000000000e+00f;
    (*this).PeripheralConeAngle.DefaultValue = 1.800000000e+02f;
    (*this).PeripheralConeScore.DefaultValue = 5.000000000e-01f;
    (*this).Is2DOnly.DefaultValue = true;
    (*this).Context = UEnvQueryContext_Querier::StaticClass();
}


