#include "IGS_SingleTileSetup.h"

FIGS_SingleTileSetup::FIGS_SingleTileSetup() {
    this->bEnabled = false;
    this->TileType = EIGS_HubTileType::Block;
    this->bRandomRotation = false;
    this->TileRotation = EIGS_TileRotation::Top;
    this->IsPlayableArea = false;
    this->ForceTile = false;
}

