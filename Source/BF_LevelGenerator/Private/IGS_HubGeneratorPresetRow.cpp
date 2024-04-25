#include "IGS_HubGeneratorPresetRow.h"

FIGS_HubGeneratorPresetRow::FIGS_HubGeneratorPresetRow() {
    this->ScenarioType = EIGS_HubScenarioType::Empty;
    this->BackdropType = EIGS_HubBackdropTypes::AllRandom;
    this->CompatibleEnvironmentTiles = 0;
    this->PresetData = NULL;
    this->bEnabled = false;
    this->bDebug = false;
    this->WaveDirection = 0;
    this->BackdropDirection = 0;
}

