#include "CommonSmallHitTile.h"

FCommonSmallHitTile::FCommonSmallHitTile() {
    (*this).bSpecificTiles = false;
    auto& gen1947 = (*this).SpecifiedTiles;
    gen1947.Empty();
}

