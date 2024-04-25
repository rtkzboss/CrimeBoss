#include "MapTileRow.h"

FMapTileRow::FMapTileRow() {
    this->MinWealth = EMETA_TileWealth::Poor;
    this->MaxWealth = EMETA_TileWealth::Poor;
    this->Type = EMETA_TileType::Empty;
    this->GangSpawnArea = EMETA_GangSpawnArea::None;
    this->DistrictType = EIGS_HubDistrict::Downtown;
    this->BackdropType = EIGS_HubBackdropTypes::AllRandom;
}

