#include "IGS_EnvQueryGenerator_AlarmDevices.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UIGS_EnvQueryGenerator_AlarmDevices::UIGS_EnvQueryGenerator_AlarmDevices() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->Querier = NULL;
}


