#include "IGS_FPS2Meta_Data.h"

FIGS_FPS2Meta_Data::FIGS_FPS2Meta_Data() {
    this->MissionResult = ECommonMissionResult::Res_Abort;
    this->MoneyCollected = 0;
    this->CivilCasualties = 0;
    this->PoliceCasualties = 0;
    this->SwatCasualties = 0;
    this->GangsterCasualties = 0;
    this->EnemiesRemaining = 0;
    this->BackupHeistersCasualties = 0;
    this->bAlarmTriggered = false;
    this->WantedBadges = 0;
    this->LootBagsCollected = 0;
    this->GameplayTime = 0.00f;
}

