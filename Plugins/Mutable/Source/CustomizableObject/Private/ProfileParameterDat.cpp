#include "ProfileParameterDat.h"

FProfileParameterDat::FProfileParameterDat() {
    (*this).ProfileName = TEXT("");
    (*this).BoolParameters.Empty();
    (*this).IntParameters.Empty();
    (*this).FloatParameters.Empty();
    (*this).TextureParameters.Empty();
    (*this).VectorParameters.Empty();
    (*this).ProjectorParameters.Empty();
}

