#include "IGS_EnvQueryGenerator_ThreatPoints.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UIGS_EnvQueryGenerator_ThreatPoints::UIGS_EnvQueryGenerator_ThreatPoints() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->Querier = NULL;
}


