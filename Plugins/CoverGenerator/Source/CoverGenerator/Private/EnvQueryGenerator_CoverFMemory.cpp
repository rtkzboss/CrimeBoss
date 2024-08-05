#include "EnvQueryGenerator_CoverFMemory.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvQueryItemType_Cover.h"

UEnvQueryGenerator_CoverFMemory::UEnvQueryGenerator_CoverFMemory() {
    (*this).SquareExtent.DefaultValue = 7.500000000e+02f;
    (*this).BoxHeight.DefaultValue = 2.000000000e+02f;
    (*this).GenerateAround = UEnvQueryContext_Querier::StaticClass();
    (*this).ItemType = UEnvQueryItemType_Cover::StaticClass();
}


