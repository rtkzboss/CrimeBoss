#include "EnvQueryGenerator_GetAllCharactersOfTeamsides.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UEnvQueryGenerator_GetAllCharactersOfTeamsides::UEnvQueryGenerator_GetAllCharactersOfTeamsides() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->GenerateAround = NULL;
}


