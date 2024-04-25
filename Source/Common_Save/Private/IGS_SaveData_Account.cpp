#include "IGS_SaveData_Account.h"

FIGS_SaveData_Account::FIGS_SaveData_Account() {
    this->bDebug = false;
    this->bReadEULA = false;
    this->bReadSaveWarning = false;
    this->bFirstCrimeTime = false;
    this->bCheckedVeteranPlayer = false;
    this->bIsVeteranPlayer = false;
    this->bSeenProgressionReset = false;
    this->bWantedProgressionResetCompensation = false;
    this->TimePlayed = 0.00f;
    this->CurrentChainMissionID = NULL;
    this->bUserShouldAdvertise = false;
}

