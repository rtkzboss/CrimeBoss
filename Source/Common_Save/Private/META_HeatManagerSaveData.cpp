#include "META_HeatManagerSaveData.h"

FMETA_HeatManagerSaveData::FMETA_HeatManagerSaveData() {
    (*this).DaysLeftForTheHeatRevision = 0;
    (*this).HeatState = EMETA_Heat::VeryLow;
    (*this).HeatValue = 0.000000000e+00f;
    (*this).PoliceInvestigationValue = 0.000000000e+00f;
    (*this).SheriffTargetGang = EMETA_Gang::None;
    auto& gen2187 = (*this).DetectivesPool;
    gen2187.Empty();
    auto& gen2188 = (*this).DeadDetectives;
    gen2188.Empty();
}

