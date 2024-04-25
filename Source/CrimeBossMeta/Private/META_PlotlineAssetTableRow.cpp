#include "META_PlotlineAssetTableRow.h"

FMETA_PlotlineAssetTableRow::FMETA_PlotlineAssetTableRow() {
    this->UnlockBossLevel = 0;
    this->Score = 0;
    this->BossPointMultiplier = 0.00f;
    this->bCanBeLost = false;
    this->Availability = EMETA_PlotlineAssetAvailability::INVALID;
    this->bMustBeBought = false;
    this->Price = 0;
    this->bNotPersistent = false;
}

