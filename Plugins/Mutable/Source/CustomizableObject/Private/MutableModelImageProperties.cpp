#include "MutableModelImageProperties.h"

FMutableModelImageProperties::FMutableModelImageProperties() {
    this->Filter = TF_Nearest;
    this->sRGB = false;
    this->LODBias = 0;
    this->LODGroup = TEXTUREGROUP_World;
    this->AddressX = TA_Wrap;
    this->AddressY = TA_Wrap;
}

