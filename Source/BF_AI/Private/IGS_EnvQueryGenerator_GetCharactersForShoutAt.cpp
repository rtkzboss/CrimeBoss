#include "IGS_EnvQueryGenerator_GetCharactersForShoutAt.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UIGS_EnvQueryGenerator_GetCharactersForShoutAt::UIGS_EnvQueryGenerator_GetCharactersForShoutAt() {
    (*this).DistanceCalm = 4.000000000e+02f;
    (*this).DistanceDetecting = 1.200000000e+03f;
    (*this).ItemType = UEnvQueryItemType_Actor::StaticClass();
}


