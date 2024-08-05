#include "EnvQueryGenerator_SniperPoints.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UEnvQueryGenerator_SniperPoints::UEnvQueryGenerator_SniperPoints() {
    (*this).OnlyCanVisit.DefaultValue = true;
    (*this).ItemType = UEnvQueryItemType_Actor::StaticClass();
}


