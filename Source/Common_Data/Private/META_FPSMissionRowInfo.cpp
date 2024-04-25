#include "META_FPSMissionRowInfo.h"

FMETA_FPSMissionRowInfo::FMETA_FPSMissionRowInfo() {
    this->MissionSubtype = EMETA_FPSMissionSubtype::MoneyMaking;
    this->DaysOnMap = 0;
    this->SupportIntel = false;
    this->IntelSoldierMultiplier = 0.00f;
    this->MinCrewSize = 0;
    this->MaxCrewSize = 0;
    this->ReturnedDataProcessingMode = EMETA_ReturnedDataProcessingMode::AcceptLoot;
    this->LootPercentageFromSuccess = 0;
    this->TurfActionAfterSuccess = EMETA_TurfActionAfterSuccess::None;
    this->StrengthChangeIntensity = EMETA_AIBossStrengthChangeIntensity::None;
    this->UnlockRespect = EMETA_RespectLvl::Low;
}

