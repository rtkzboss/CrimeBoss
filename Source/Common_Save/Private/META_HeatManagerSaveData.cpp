#include "META_HeatManagerSaveData.h"

FMETA_HeatManagerSaveData::FMETA_HeatManagerSaveData() {
    this->DaysLeftForTheHeatRevision = 0;
    this->HeatState = EMETA_Heat::INVALID;
    this->HeatValue = 0.00f;
    this->PoliceInvestigationValue = 0.00f;
    this->SheriffTargetGang = EMETA_Gang::None;
}

