#include "IGS_EnvQueryGenerator_SearchPoints.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UIGS_EnvQueryGenerator_SearchPoints::UIGS_EnvQueryGenerator_SearchPoints() {
    (*this).FilterLocked.DefaultValue = true;
    (*this).FilterVisited.DefaultValue = true;
    (*this).FilterVisitedTime.DefaultValue = 3.000000000e+01f;
    (*this).ItemType = UEnvQueryItemType_Actor::StaticClass();
}


