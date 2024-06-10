#include "META_WarManagerSaveData.h"

FMETA_WarManagerSaveData::FMETA_WarManagerSaveData() {
    (*this).AttemptsToCaptureTileCounter = 0;
    auto& gen2189 = (*this).TodaysLockedTilesForAI;
    gen2189.Empty();
    (*this).DaysWithMoreAttack = 0;
    (*this).AILastTileConfigIndex = 0;
    (*this).bIsAllTileCaptured = false;
    (*this).bIsAllGangsEradicated = false;
}

