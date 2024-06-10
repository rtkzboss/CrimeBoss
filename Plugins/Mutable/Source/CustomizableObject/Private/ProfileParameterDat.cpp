#include "ProfileParameterDat.h"

FProfileParameterDat::FProfileParameterDat() {
    (*this).ProfileName = TEXT("");
    auto& gen1576 = (*this).BoolParameters;
    gen1576.Empty();
    auto& gen1577 = (*this).IntParameters;
    gen1577.Empty();
    auto& gen1578 = (*this).FloatParameters;
    gen1578.Empty();
    auto& gen1579 = (*this).TextureParameters;
    gen1579.Empty();
    auto& gen1580 = (*this).VectorParameters;
    gen1580.Empty();
    auto& gen1581 = (*this).ProjectorParameters;
    gen1581.Empty();
}

