#include "EnvQueryTest_InSameArea.h"

UEnvQueryTest_InSameArea::UEnvQueryTest_InSameArea() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->DesiredRoomPoint = NULL;
}


