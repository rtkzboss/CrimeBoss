#include "IGS_WeaponAttackDefinition.h"

FIGS_WeaponAttackDefinition::FIGS_WeaponAttackDefinition() {
    (*this).ProjectileClass = nullptr;
    (*this).BaseDamage = 1.000000000e+02f;
    (*this).EffectiveRange = 3.000000000e+04f;
    (*this).MaxRange = 5.000000000e+04f;
    (*this).MinDamageMultiplier = 5.000000000e-01f;
    (*this).RoundsPerMinute = 6.000000000e+02f;
    (*this).SemiAutoDelay = 1.000000015e-01f;
    (*this).BurstDelay = 2.000000030e-01f;
    (*this).ProjectilesPerShot = 1;
    (*this).ShooterTypes = 0;
}

