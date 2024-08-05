#include "IGS_EnvQueryTest_LootBagIsPickable.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UIGS_EnvQueryTest_LootBagIsPickable::UIGS_EnvQueryTest_LootBagIsPickable() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


