#include "PFSpeedCurve.h"

FPFSpeedCurve::FPFSpeedCurve() {
    (*this)._speedCurve.Points.Empty();
    (*this)._speedCurve.bIsLooped = false;
    (*this)._speedCurve.LoopKeyOffset = 0.000000000e+00f;
}

