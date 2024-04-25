#include "META_SaveData_DebugCareer.h"

FMETA_SaveData_DebugCareer::FMETA_SaveData_DebugCareer() {
    this->bIsFilled = false;
    this->DisablePlotlines = false;
    this->Day = 0;
    this->Cash = 0;
    this->Respect = EMETA_RespectLvl::Low;
    this->StartTiles = 0;
    this->ArmySize = 0;
    this->HeatState = EMETA_Heat::INVALID;
    this->PoliceInvestigationValue = 0;
}

