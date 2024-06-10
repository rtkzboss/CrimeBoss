#include "PFEventPoints.h"

FPFEventPoints::FPFEventPoints() {
    auto& gen1209 = (*this).Points;
    gen1209.Empty();
    (*this).AllEventHolder = nullptr;
    auto& gen1210 = (*this).Holders;
    gen1210.Empty();
}

