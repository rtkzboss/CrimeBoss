#include "META_SaveData_DebugCareer.h"

FMETA_SaveData_DebugCareer::FMETA_SaveData_DebugCareer() {
    (*this).bIsFilled = false;
    (*this).Plotlines.Empty();
    (*this).DisablePlotlines = false;
    (*this).CrewIds.Empty();
    (*this).CrewQualities.Empty();
    (*this).Day = 0;
    (*this).Cash = 0;
    (*this).Respect = EMETA_RespectLvl::Low;
    (*this).StartTiles = 0;
    (*this).ArmySize = 0;
    (*this).HeatState = EMETA_Heat::Low;
    (*this).PoliceInvestigationValue = 0;
}

