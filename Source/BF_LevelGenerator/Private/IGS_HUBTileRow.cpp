#include "IGS_HUBTileRow.h"

FIGS_HUBTileRow::FIGS_HUBTileRow() {
    (*this).bIsEnabled = true;
    (*this).bIsDebug = true;
    (*this).TileEnviroment = EIGS_TileEnviroment::Street;
    (*this).DistrictType = 0;
    (*this).ArtDA.BuildConfigurationDataAsset = nullptr;
    (*this).ArtDA.VariantIndex = 0;
    auto& gen1987 = (*this).Supports;
    gen1987.Empty();
}

