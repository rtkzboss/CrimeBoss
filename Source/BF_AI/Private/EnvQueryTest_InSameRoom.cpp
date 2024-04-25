#include "EnvQueryTest_InSameRoom.h"

UEnvQueryTest_InSameRoom::UEnvQueryTest_InSameRoom() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->DesiredRoomPoint = NULL;
}


