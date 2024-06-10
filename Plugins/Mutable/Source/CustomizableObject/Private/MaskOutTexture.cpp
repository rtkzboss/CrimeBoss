#include "MaskOutTexture.h"

FMaskOutTexture::FMaskOutTexture() {
    (*this).SizeX = 0;
    (*this).SizeY = 0;
    auto& gen1574 = (*this).Data;
    gen1574.Empty();
}

