#include "IGS_GrenadeData.h"

FIGS_GrenadeData::FIGS_GrenadeData() {
    (*this).OverlapsOnExplosion = true;
    (*this).bLineTraceOnOverlap = false;
    (*this).LineTraceZOffset = 1.000000000e+02f;
    (*this).InnerEffectRadius = 5.000000000e+02f;
    (*this).OuterEffectRadius = 5.000000000e+02f;
    (*this).EffectFalloff = 0.000000000e+00f;
    (*this).StartTimerImmediately = false;
    (*this).ExplosionTimer = 3.000000000e+00f;
    (*this).DestroyAfterExplosionTime = 3.000000000e+00f;
    (*this).CanBeCooked = false;
    (*this).bCanAffectThrower = false;
    (*this).bCanAffectFriendlies = false;
    (*this).bCanAffectRobots = true;
    (*this).bCanAffectHumans = true;
    (*this).DealsDamage = false;
    (*this).BaseDamage = 4.000000000e+02f;
    (*this).MinimumDamage = 1.000000000e+02f;
    (*this).ExplosionLoudness = 1.000000000e+00f;
    (*this).EffectPreventionChannel = ECC_GameTraceChannel7;
    (*this).DamageTypeClass = nullptr;
    (*this).ShotImpactType = nullptr;
}

