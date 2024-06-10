#include "IGS_EnvQueryTest_LootIsLootable.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UIGS_EnvQueryTest_LootIsLootable::UIGS_EnvQueryTest_LootIsLootable() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


