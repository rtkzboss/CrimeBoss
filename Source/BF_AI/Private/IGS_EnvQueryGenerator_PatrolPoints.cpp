#include "IGS_EnvQueryGenerator_PatrolPoints.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UIGS_EnvQueryGenerator_PatrolPoints::UIGS_EnvQueryGenerator_PatrolPoints() {
    (*this).FilterLocked.DefaultValue = true;
    (*this).FilterLast.DefaultValue = true;
    (*this).FilterByTags.DefaultValue = true;
    (*this).Max3DDistance.DefaultValue = 3.000000000e+03f;
    (*this).MaxHeightDiff.DefaultValue = 2.500000000e+02f;
    (*this).FilterDistance.DefaultValue = true;
    (*this).FilterHeight.DefaultValue = true;
    (*this).ItemType = UEnvQueryItemType_Actor::StaticClass();
}


