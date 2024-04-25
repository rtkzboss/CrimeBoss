#include "META_ItemSpawnSettings.h"

FMETA_ItemSpawnSettings::FMETA_ItemSpawnSettings() {
    this->ItemQuality = EMETA_ItemQuality::None;
    this->MinDaily = 0;
    this->MaxDaily = 0;
    this->SpawnChance = 0;
    this->StayInShopDays = 0;
}

