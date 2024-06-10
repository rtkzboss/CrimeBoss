#include "PFPathRoller.h"

FPFPathRoller::FPFPathRoller() {
    auto& gen1216 = (*this)._rollAnglesCurve.Points;
    gen1216.Empty();
    (*this)._rollAnglesCurve.bIsLooped = false;
    (*this)._rollAnglesCurve.LoopKeyOffset = 0.000000000e+00f;
    auto& gen1217 = (*this)._curves;
    gen1217.Empty();
}

