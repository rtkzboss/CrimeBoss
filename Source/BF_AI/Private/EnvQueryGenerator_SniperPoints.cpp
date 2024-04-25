#include "EnvQueryGenerator_SniperPoints.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UEnvQueryGenerator_SniperPoints::UEnvQueryGenerator_SniperPoints() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->IgnoreSniperPoints = NULL;
}


