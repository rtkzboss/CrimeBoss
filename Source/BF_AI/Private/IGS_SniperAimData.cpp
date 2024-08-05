#include "IGS_SniperAimData.h"

FIGS_SniperAimData::FIGS_SniperAimData() {
    (*this).AimType = EIGS_AimType::None;
    (*this).AimActor = nullptr;
    (*this).AimPoint.X = 0.000000000e+00f;
    (*this).AimPoint.Y = 0.000000000e+00f;
    (*this).AimPoint.Z = 0.000000000e+00f;
    (*this).SniperPoint = nullptr;
}

