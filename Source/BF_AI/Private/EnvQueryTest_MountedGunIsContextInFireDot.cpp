#include "EnvQueryTest_MountedGunIsContextInFireDot.h"

UEnvQueryTest_MountedGunIsContextInFireDot::UEnvQueryTest_MountedGunIsContextInFireDot() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Context = NULL;
    this->RotationBoundsMutlipier = 0.80f;
}


