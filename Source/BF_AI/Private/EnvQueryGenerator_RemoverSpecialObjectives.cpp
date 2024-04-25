#include "EnvQueryGenerator_RemoverSpecialObjectives.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UEnvQueryGenerator_RemoverSpecialObjectives::UEnvQueryGenerator_RemoverSpecialObjectives() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->Querier = NULL;
}


