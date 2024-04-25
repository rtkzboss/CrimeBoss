#include "EnvQueryTest_HasLosThroughCharacters.h"

UEnvQueryTest_HasLosThroughCharacters::UEnvQueryTest_HasLosThroughCharacters() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->LosTargetContext = NULL;
    this->OtherCharactersContext = NULL;
}


