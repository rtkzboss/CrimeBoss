#include "META_PreviousMissionData.h"

FMETA_PreviousMissionData::FMETA_PreviousMissionData() {
    this->MissionResult = EMETA_JobResult::Success;
    this->MoneyCollected = 0;
    this->CivilCasualties = 0;
    this->PoliceCasualties = 0;
    this->SwatCasualties = 0;
    this->GangsterCasualties = 0;
    this->EnemiesRemaining = 0;
    this->BackupHeistersCasualties = 0;
    this->AlarmTriggered = false;
    this->WantedStarts = 0;
    this->BagsCollected = 0;
    this->LightingScenarioType = EIGS_LightingScenarioType::Midday;
}

