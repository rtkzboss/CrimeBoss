#include "IGS_SoftLockConfig.h"

FIGS_SoftLockConfig::FIGS_SoftLockConfig() {
    this->SoftLockZoneRadius = 0.00f;
    this->MaxDistance = 0.00f;
    this->LockStrength = 0.00f;
    this->TimeWithoutStickInputToDisableSoftLock = 0.00f;
    this->StickInputDeadzoneForSoftLock = 0.00f;
    this->StrengthDecayStartPitch = 0.00f;
    this->bZonesScalingEnabled = false;
}

