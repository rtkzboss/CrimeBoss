#include "META_MoneyMakingGoalTableRow.h"

FMETA_MoneyMakingGoalTableRow::FMETA_MoneyMakingGoalTableRow() {
    this->UseLockRespectCondition = false;
    this->UnlockRespect = EMETA_RespectLvl::Low;
    this->LockRespect = EMETA_RespectLvl::Low;
    this->InstigatorPartner = EMETA_Partner::None;
    this->EnemyGangIDs = 0;
}

