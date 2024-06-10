#include "EnvQueryGenerator_RemoverSpecialObjectives.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UEnvQueryGenerator_RemoverSpecialObjectives::UEnvQueryGenerator_RemoverSpecialObjectives() {
    (*this).Range.DefaultValue = 5.000000000e+04f;
    (*this).ItemType = UEnvQueryItemType_Actor::StaticClass();
}


