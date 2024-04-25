#include "EnvQueryGenerator_GetDefendPoints.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UEnvQueryGenerator_GetDefendPoints::UEnvQueryGenerator_GetDefendPoints() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
}


