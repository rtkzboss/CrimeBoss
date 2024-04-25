#include "IGS_EQG_PanicPoints.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UIGS_EQG_PanicPoints::UIGS_EQG_PanicPoints() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->Querier = NULL;
}


