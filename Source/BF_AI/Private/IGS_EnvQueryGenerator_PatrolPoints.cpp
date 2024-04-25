#include "IGS_EnvQueryGenerator_PatrolPoints.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UIGS_EnvQueryGenerator_PatrolPoints::UIGS_EnvQueryGenerator_PatrolPoints() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->Querier = NULL;
}


