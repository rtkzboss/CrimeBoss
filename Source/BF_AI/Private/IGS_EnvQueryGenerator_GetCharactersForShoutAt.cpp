#include "IGS_EnvQueryGenerator_GetCharactersForShoutAt.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UIGS_EnvQueryGenerator_GetCharactersForShoutAt::UIGS_EnvQueryGenerator_GetCharactersForShoutAt() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->DistanceCalm = 400.00f;
    this->DistanceDetecting = 1200.00f;
}


