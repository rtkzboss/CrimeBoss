#include "META_SellLootSpawnSettings.h"

FMETA_SellLootSpawnSettings::FMETA_SellLootSpawnSettings() {
    this->Quality = EMETA_ItemQuality::None;
    this->MinDaily = 0;
    this->MaxDaily = 0;
    this->MaxCountInStack = 0;
    this->SpawnChance = 0;
    this->OnlyIfPlayerHasSom = false;
}

