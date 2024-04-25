#include "IGS_MissionResult.h"

FIGS_MissionResult::FIGS_MissionResult() {
    this->MissionResult = ECommonMissionResult::Res_Abort;
    this->bCleanExecution = false;
    this->bBonusObjective = false;
    this->Rating = 0;
    this->Score = 0;
    this->TotalQuickplayScore = 0;
    this->TotalChainScore = 0;
    this->ObjectiveValue = 0;
    this->BonusValue = 0;
    this->BonusCash = 0;
    this->KilledCivilians = 0;
    this->KilledPolice = 0;
    this->KilledGangsters = 0;
    this->KilledSWAT = 0;
    this->KilledHeisters = 0;
    this->RevivesUsed = 0;
    this->bIsChainMission = false;
    this->bChainCompleted = false;
    this->ChainType = EIGS_ChainType::UrbanLegend;
    this->bIsFilled = false;
    this->UserDifficulty = EIGS_UserDifficulty::UD_Unknown;
    this->LobbyVisibility = EMETA_LobbyVisibilityType::Unknown;
    this->MPLobbyType = EIGS_MPLobbyType::Normal;
    this->DebriefType = EMETA_DebriefType::Standard;
    this->GameplayTime = 0.00f;
}

