#include "IGS_HUBScenarioData.h"

FIGS_HUBScenarioData::FIGS_HUBScenarioData() {
    (*this).ScenarioType = EIGS_HubScenarioType::Empty;
    (*this).ScenarioDA.BuildConfigurationDataAsset = nullptr;
    (*this).ScenarioDA.VariantIndex = 0;
}

