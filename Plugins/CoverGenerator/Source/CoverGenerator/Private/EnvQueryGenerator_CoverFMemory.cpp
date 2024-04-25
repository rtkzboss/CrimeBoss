#include "EnvQueryGenerator_CoverFMemory.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvQueryItemType_Cover.h"

UEnvQueryGenerator_CoverFMemory::UEnvQueryGenerator_CoverFMemory() {
    this->ItemType = UEnvQueryItemType_Cover::StaticClass();
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}


