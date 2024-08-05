#include "EnvQueryTest_SquadDistanceFromFriendlyCharacters.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_SquadDistanceFromFriendlyCharacters::UEnvQueryTest_SquadDistanceFromFriendlyCharacters() {
    (*this).FriendlyActorsContext = UEnvQueryContext_Querier::StaticClass();
}


