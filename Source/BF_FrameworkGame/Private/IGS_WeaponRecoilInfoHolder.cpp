#include "IGS_WeaponRecoilInfoHolder.h"

FIGS_WeaponRecoilInfoHolder::FIGS_WeaponRecoilInfoHolder() {
    this->RecoilPitchBank = 0.00f;
    this->CompensatingPitchBank = 0.00f;
    this->LastPitch = 0.00f;
    this->LastYaw = 0.00f;
    this->CurrentDownSpeed = 0.00f;
    this->IsShooting = false;
}

