#include "IGS_EnvQueryGenerator_SearchPoints.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UIGS_EnvQueryGenerator_SearchPoints::UIGS_EnvQueryGenerator_SearchPoints() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->Querier = NULL;
    this->SearchPoints = NULL;
}


