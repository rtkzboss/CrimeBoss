#include "IGS_ScopeModData.h"

FIGS_ScopeModData::FIGS_ScopeModData() {
    (*this).IsDynamicScope = false;
    (*this).ScopeType = EIGS_ScopeType::Scope_Normal;
    auto& gen1956 = (*this).ScopeZoom;
    gen1956.Empty();
    gen1956.AddDefaulted(1);
    (*this).WeaponTortillaOffset.X = 0.000000000e+00f;
    (*this).WeaponTortillaOffset.Y = 0.000000000e+00f;
    (*this).WeaponTortillaOffset.Z = 0.000000000e+00f;
    (*this).WeaponTortillaAimFOV = 6.000000000e+01f;
    (*this).AimOffsetLocation.X = 0.000000000e+00f;
    (*this).AimOffsetLocation.Y = 0.000000000e+00f;
    (*this).AimOffsetLocation.Z = 0.000000000e+00f;
    (*this).AimOffsetRotation.X = 0.000000000e+00f;
    (*this).AimOffsetRotation.Y = 0.000000000e+00f;
    (*this).AimOffsetRotation.Z = 0.000000000e+00f;
    (*this).AttachOffsetVector.X = 0.000000000e+00f;
    (*this).AttachOffsetVector.Y = 0.000000000e+00f;
    (*this).AttachOffsetVector.Z = 0.000000000e+00f;
    (*this).ScopeInPercent = 8.000000119e-01f;
}

