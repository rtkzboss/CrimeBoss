#include "META_CareerEndSaveData.h"

FMETA_CareerEndSaveData::FMETA_CareerEndSaveData() {
    this->bIsPending = false;
    this->bRewardsClaimed = false;
    this->Reason = EMETA_CareerCompletionReason::NoTurfTiles;
    this->BossKilledBy = EMETA_Gang::None;
}

