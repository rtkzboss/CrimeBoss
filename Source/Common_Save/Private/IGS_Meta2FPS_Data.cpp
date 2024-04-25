#include "IGS_Meta2FPS_Data.h"

FIGS_Meta2FPS_Data::FIGS_Meta2FPS_Data() {
    this->TileEnvironment = EIGS_TileEnviroment::Street;
    this->HubDistrict = EIGS_HubDistrict::Downtown;
    this->HubVariant = EIGS_HubBackdropTypes::AllRandom;
    this->LightingScenario = EIGS_LightingScenarioType::Midday;
    this->ScenarioDifficulty = EIGS_ScenarioDifficulty::SD_Unknown;
    this->FPSDifficulty = EIGS_FPSDifficulty::FD_Unknown;
    this->Heat = EMETA_Heat::INVALID;
    this->WantedBadges = 0;
    this->IntelLevel = 0;
    this->StartMusic = EIGS_MusicMissionState::None;
    this->StartupSource = EIGS_MissionStartupSource::Editor;
    this->QPModeSource = EIGS_QPModeSource::Lobby;
    this->ObjectiveValue = 0;
    this->TotalMissionValue = 0;
    this->TotalLootbagCount = 0;
    this->Respect = EMETA_RespectLvl::Low;
    this->IsChainMission = false;
    this->ChainType = EIGS_ChainType::UrbanLegend;
    this->PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    this->PrimaryEnemyTier = EIGS_AITiers::AT_Tier1;
    this->SecondaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    this->SecondaryEnemyTier = EIGS_AITiers::AT_Tier1;
    this->SWATVariation = EIGS_SWATVariationType::US_None;
    this->SWATTier = EIGS_AITiers::AT_Tier1;
    this->AllyVariation = EIGS_HeistersBackupVariationType::US_None;
    this->AllyTier = EIGS_AITiers::AT_Tier1;
    this->ExpectedPlayerCount = 0;
    this->ObjectivePercentage = 0;
    this->NeedObjectiveCompletion = false;
    this->bDownedCharctersSurvive = false;
    this->CiviliansAmountOverride = 0;
    this->bIsDebug = false;
}

