#include "CartesianRangeBound.h"

FCartesianRangeBound::FCartesianRangeBound() {
    (*this).Type = ECartesianRangeBoundType::FitToData;
    (*this).FixedBoundValue = 0.000000000e+00f;
}

