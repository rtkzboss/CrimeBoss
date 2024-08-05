#include "IGS_WeaponRecoilInfoHolder.h"

FIGS_WeaponRecoilInfoHolder::FIGS_WeaponRecoilInfoHolder() {
    (*this).RecoilPitchBank = 0.000000000e+00f;
    (*this).CompensatingPitchBank = 0.000000000e+00f;
    (*this).LastPitch = 0.000000000e+00f;
    (*this).LastYaw = 0.000000000e+00f;
    (*this).CurrentDownSpeed = 0.000000000e+00f;
    (*this).IsShooting = false;
}

