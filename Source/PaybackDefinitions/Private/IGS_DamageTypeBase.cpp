#include "IGS_DamageTypeBase.h"

UIGS_DamageTypeBase::UIGS_DamageTypeBase() {
    (*this).HeisterReceiveDamageMult = 1.000000000e+00f;
    (*this).AmbientReceiveDamageMult = 1.000000000e+00f;
    (*this).bShouldConsiderBodyParts = true;
    (*this).DistanceFalloff = 1.000000000e+02f;
    (*this).GameplayEffectDuration = -1.000000000e+00f;
}


