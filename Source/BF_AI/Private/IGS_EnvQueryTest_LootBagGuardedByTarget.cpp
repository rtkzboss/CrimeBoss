#include "IGS_EnvQueryTest_LootBagGuardedByTarget.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UIGS_EnvQueryTest_LootBagGuardedByTarget::UIGS_EnvQueryTest_LootBagGuardedByTarget() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


