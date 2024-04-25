#include "EnvQueryGenerator_AISpawnPoints.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UEnvQueryGenerator_AISpawnPoints::UEnvQueryGenerator_AISpawnPoints() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->Querier = NULL;
}


