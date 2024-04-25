#include "META_StoryMissionSave.h"

FMETA_StoryMissionSave::FMETA_StoryMissionSave() {
    this->PrimaryEnemyVariationOverride = EIGS_GangsterVariationType::US_None;
    this->GangsterTier = EIGS_AITiers::AT_Tier1;
    this->PrimarySwatVariationOverride = EIGS_SWATVariationType::US_None;
    this->SWATTier = EIGS_AITiers::AT_Tier1;
    this->Type = EMETA_JobType::TerritoryNeutralAttack;
    this->MissionExpenses = 0;
    this->HeistersCut = 0;
    this->FencingExpenses = 0;
    this->MissionOutcome = 0;
    this->BonusCash = 0;
    this->ObjectiveMonetaryValue = 0;
    this->MaxMonetaryValue = 0;
    this->Reward1stStar = 0;
    this->Reward2ndStar = 0;
    this->Reward3rdStar = 0;
    this->LootMonetaryValue = 0;
    this->ObjectiveState = EMETA_ObjectiveState::InProgress;
    this->Difficulty = EIGS_ScenarioDifficulty::SD_Unknown;
    this->UserDifficulty = EIGS_UserDifficulty::UD_Unknown;
    this->WantedStars = 0;
    this->TurfActionAfterSuccess = EMETA_TurfActionAfterSuccess::None;
    this->WeaknessStrength = EMETA_AIBossStrengthChangeIntensity::None;
}

