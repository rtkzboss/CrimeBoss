#include "EnvQueryGenerator_AISpawnGroups.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UEnvQueryGenerator_AISpawnGroups::UEnvQueryGenerator_AISpawnGroups() {
    (*this).Range.DefaultValue = 5.000000000e+03f;
    (*this).TeamSide.DefaultValue = 255;
    (*this).ItemType = UEnvQueryItemType_Actor::StaticClass();
}


