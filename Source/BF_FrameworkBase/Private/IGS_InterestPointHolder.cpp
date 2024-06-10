#include "IGS_InterestPointHolder.h"

FIGS_InterestPointHolder::FIGS_InterestPointHolder() {
    (*this).Actor = nullptr;
    (*this).PointOrOffset.X = 0.000000000e+00f;
    (*this).PointOrOffset.Y = 0.000000000e+00f;
    (*this).PointOrOffset.Z = 0.000000000e+00f;
    (*this).Enabled = false;
}

