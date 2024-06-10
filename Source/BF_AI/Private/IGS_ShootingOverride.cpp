#include "IGS_ShootingOverride.h"

FIGS_ShootingOverride::FIGS_ShootingOverride() {
    (*this).Active = false;
    (*this).Target.PointOrOffset.X = 0.000000000e+00f;
    (*this).Target.PointOrOffset.Y = 0.000000000e+00f;
    (*this).Target.PointOrOffset.Z = 0.000000000e+00f;
    (*this).Target.Enabled = false;
    (*this).ShootingType = EIGS_ShootingOverrideType::Clasic;
}

