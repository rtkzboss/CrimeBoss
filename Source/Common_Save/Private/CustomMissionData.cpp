#include "CustomMissionData.h"

FCustomMissionData::FCustomMissionData() {
    this->DistrictVariant = EIGS_HubBackdropTypes::AllRandom;
    this->LightingScenario = EIGS_LightingScenarioType::Midday;
    this->AmountOfBots = 0;
    this->Heat = EMETA_Heat::INVALID;
    this->MissionType = EIGS_MenuCategory::BigHeists;
    this->MissionDifficulty = EIGS_ScenarioDifficulty::SD_Unknown;
}

