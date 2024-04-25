#include "IGS_QPLobbyMissionInfo.h"

FIGS_QPLobbyMissionInfo::FIGS_QPLobbyMissionInfo() {
    this->MissionID = NULL;
    this->Difficulty = EIGS_ScenarioDifficulty::SD_Unknown;
    this->ObjectiveMonetaryValue = 0;
    this->MaxMonetaryValue = 0;
    this->FirstStarReward = 0;
    this->SecondStarReward = 0;
    this->ThirdStarReward = 0;
    this->MonetaryLootValue = 0;
}

