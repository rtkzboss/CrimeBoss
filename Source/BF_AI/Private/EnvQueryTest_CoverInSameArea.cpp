#include "EnvQueryTest_CoverInSameArea.h"

UEnvQueryTest_CoverInSameArea::UEnvQueryTest_CoverInSameArea() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->DesiredRoomPoint = NULL;
}


