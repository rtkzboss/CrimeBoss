#include "PFSpeedCurve.h"

FPFSpeedCurve::FPFSpeedCurve() {
    auto& gen1218 = (*this)._speedCurve.Points;
    gen1218.Empty();
    (*this)._speedCurve.bIsLooped = false;
    (*this)._speedCurve.LoopKeyOffset = 0.000000000e+00f;
}

