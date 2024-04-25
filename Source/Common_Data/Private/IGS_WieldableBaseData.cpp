#include "IGS_WieldableBaseData.h"

FIGS_WieldableBaseData::FIGS_WieldableBaseData() {
    this->WieldableTortillaBaseFOV = 0.00f;
    this->WieldableTortillaAimFOV = 0.00f;
    this->HolsterTimeInSeconds = 0.00f;
    this->WieldingMovementSpeedMultiplier = 0.00f;
    this->Class = EIGS_WieldableClass::C_Generic;
}

