#include "EnvQueryGenerator_AISpawnGroups.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UEnvQueryGenerator_AISpawnGroups::UEnvQueryGenerator_AISpawnGroups() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->Querier = NULL;
}


