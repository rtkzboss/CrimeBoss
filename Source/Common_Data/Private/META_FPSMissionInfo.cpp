#include "META_FPSMissionInfo.h"

FMETA_FPSMissionInfo::FMETA_FPSMissionInfo() {
    this->FPSMissionID = NULL;
    this->LightingScenario = EIGS_LightingScenarioType::Midday;
    this->BackdropType = EIGS_HubBackdropTypes::AllRandom;
    this->TileEnviroment = EIGS_TileEnviroment::Street;
    this->NeedObjectiveCompletion = false;
    this->PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    this->SecondaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    this->SWATVariation = EIGS_SWATVariationType::US_None;
    this->AllyVariation = EIGS_HeistersBackupVariationType::US_None;
    this->bForceEnemyTier = false;
    this->EnemyTier = EIGS_AITiers::AT_Tier1;
    this->bForceSWATTier = false;
    this->SWATTier = EIGS_AITiers::AT_Tier1;
    this->bForceAllyTier = false;
    this->AllyTier = EIGS_AITiers::AT_Tier1;
    this->bForceDifficulty = false;
    this->Difficulty = EIGS_ScenarioDifficulty::SD_Unknown;
    this->bForceHeat = false;
    this->bMinimalHeatOnly = false;
    this->Heat = EMETA_Heat::INVALID;
    this->TotalLootbagCount = 0;
    this->ForcedDetectivesCount = 0;
    this->StealthMode = EMETA_StealthMode::NotAvailable;
    this->bDownedCharctersSurvive = false;
}

