#include "EnvQueryGenerator_FollowCircle.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryGenerator_FollowCircle::UEnvQueryGenerator_FollowCircle() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}


