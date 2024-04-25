#include "EnvQueryTest_MountedGunIsClosestPawn.h"

UEnvQueryTest_MountedGunIsClosestPawn::UEnvQueryTest_MountedGunIsClosestPawn() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
}


