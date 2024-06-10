#include "EnvQueryTest_HasStealthReaction.h"
#include "EnvironmentQuery/EnvQueryTest.h"

UEnvQueryTest_HasStealthReaction::UEnvQueryTest_HasStealthReaction() {
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


