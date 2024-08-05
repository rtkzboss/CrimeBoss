#include "IGS_HubGroupTileSetup.h"
#include "EIGS_HubTileType.h"
#include "EIGS_TileRotation.h"

FIGS_HubGroupTileSetup::FIGS_HubGroupTileSetup() {
    (*this).Tile0.bEnabled = false;
    (*this).Tile0.TileType = EIGS_HubTileType::Block;
    (*this).Tile0.bRandomRotation = false;
    (*this).Tile0.TileRotation = EIGS_TileRotation::Top;
    (*this).Tile0.IsPlayableArea = true;
    (*this).Tile0.ForceTile = false;
    (*this).Tile0.ForcedTile.DataTable = nullptr;
    (*this).Tile0.ForcedTile.RowName = NAME_None;
    (*this).Tile1.bEnabled = false;
    (*this).Tile1.TileType = EIGS_HubTileType::Block;
    (*this).Tile1.bRandomRotation = false;
    (*this).Tile1.TileRotation = EIGS_TileRotation::Top;
    (*this).Tile1.IsPlayableArea = true;
    (*this).Tile1.ForceTile = false;
    (*this).Tile1.ForcedTile.DataTable = nullptr;
    (*this).Tile1.ForcedTile.RowName = NAME_None;
    (*this).Tile2.bEnabled = false;
    (*this).Tile2.TileType = EIGS_HubTileType::Block;
    (*this).Tile2.bRandomRotation = false;
    (*this).Tile2.TileRotation = EIGS_TileRotation::Top;
    (*this).Tile2.IsPlayableArea = true;
    (*this).Tile2.ForceTile = false;
    (*this).Tile2.ForcedTile.DataTable = nullptr;
    (*this).Tile2.ForcedTile.RowName = NAME_None;
    (*this).Tile3.bEnabled = false;
    (*this).Tile3.TileType = EIGS_HubTileType::Block;
    (*this).Tile3.bRandomRotation = false;
    (*this).Tile3.TileRotation = EIGS_TileRotation::Top;
    (*this).Tile3.IsPlayableArea = true;
    (*this).Tile3.ForceTile = false;
    (*this).Tile3.ForcedTile.DataTable = nullptr;
    (*this).Tile3.ForcedTile.RowName = NAME_None;
    (*this).TileFlag = EIGS_HubScenarioFlag::Empty;
    (*this).IsPlayableArea = true;
}

