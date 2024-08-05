#include "PFPathRoller.h"

FPFPathRoller::FPFPathRoller() {
    (*this)._rollAnglesCurve.Points.Empty();
    (*this)._rollAnglesCurve.bIsLooped = false;
    (*this)._rollAnglesCurve.LoopKeyOffset = 0.000000000e+00f;
    (*this)._curves.Empty();
}

