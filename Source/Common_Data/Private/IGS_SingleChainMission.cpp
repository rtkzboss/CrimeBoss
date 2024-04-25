#include "IGS_SingleChainMission.h"

FIGS_SingleChainMission::FIGS_SingleChainMission() {
    this->ID = NULL;
    this->FPSMissionID = NULL;
    this->LightingScenario = EIGS_LightingScenarioType::Midday;
    this->BackdropType = EIGS_HubBackdropTypes::AllRandom;
    this->TileEnviroment = EIGS_TileEnviroment::Street;
    this->PrimaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    this->SecondaryEnemyVariation = EIGS_GangsterVariationType::US_None;
    this->SWATVariation = EIGS_SWATVariationType::US_None;
    this->AllyVariation = EIGS_HeistersBackupVariationType::US_None;
}

