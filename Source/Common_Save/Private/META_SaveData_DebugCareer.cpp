#include "META_SaveData_DebugCareer.h"

FMETA_SaveData_DebugCareer::FMETA_SaveData_DebugCareer() {
    (*this).bIsFilled = false;
    auto& gen2283 = (*this).Plotlines;
    gen2283.Empty();
    (*this).DisablePlotlines = false;
    auto& gen2284 = (*this).CrewIds;
    gen2284.Empty();
    auto& gen2285 = (*this).CrewQualities;
    gen2285.Empty();
    (*this).Day = 0;
    (*this).Cash = 0;
    (*this).Respect = EMETA_RespectLvl::Low;
    (*this).StartTiles = 0;
    (*this).ArmySize = 0;
    (*this).HeatState = EMETA_Heat::Low;
    (*this).PoliceInvestigationValue = 0;
}

