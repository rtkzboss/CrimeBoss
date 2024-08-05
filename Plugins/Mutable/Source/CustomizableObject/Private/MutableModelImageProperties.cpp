#include "MutableModelImageProperties.h"

FMutableModelImageProperties::FMutableModelImageProperties() {
    (*this).TextureParameterName = TEXT("");
    (*this).Filter = TF_Default;
    (*this).sRGB = false;
    (*this).LODBias = 0;
    (*this).LODGroup = TEXTUREGROUP_Terrain_Heightmap;
    (*this).AddressX = TA_Clamp;
    (*this).AddressY = TA_Clamp;
}

