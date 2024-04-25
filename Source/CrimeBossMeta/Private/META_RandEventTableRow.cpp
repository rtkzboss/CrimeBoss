#include "META_RandEventTableRow.h"

FMETA_RandEventTableRow::FMETA_RandEventTableRow() {
    this->EvenCategory = EMETA_RandEventCategory::None;
    this->Partner = EMETA_Partner::None;
    this->UseLockRespectCondition = false;
    this->UnlockRespect = EMETA_RespectLvl::Low;
    this->LockRespect = EMETA_RespectLvl::Low;
    this->MinHeat = EMETA_Heat::INVALID;
    this->MinInvestigation = 0.00f;
    this->Chance = 0.00f;
    this->CooldownForEvent = 0;
    this->bUseCutsceneSpecificationPerGang = false;
    this->MissionID = NULL;
    this->bCanBeSelectedEvenIfPlayerHasNotEnoughMoney = false;
}

