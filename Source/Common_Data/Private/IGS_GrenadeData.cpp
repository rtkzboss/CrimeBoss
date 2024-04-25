#include "IGS_GrenadeData.h"

FIGS_GrenadeData::FIGS_GrenadeData() {
    this->OverlapsOnExplosion = false;
    this->bLineTraceOnOverlap = false;
    this->LineTraceZOffset = 0.00f;
    this->InnerEffectRadius = 0.00f;
    this->OuterEffectRadius = 0.00f;
    this->EffectFalloff = 0.00f;
    this->StartTimerImmediately = false;
    this->ExplosionTimer = 0.00f;
    this->DestroyAfterExplosionTime = 0.00f;
    this->CanBeCooked = false;
    this->bCanAffectThrower = false;
    this->bCanAffectFriendlies = false;
    this->bCanAffectRobots = false;
    this->bCanAffectHumans = false;
    this->DealsDamage = false;
    this->BaseDamage = 0.00f;
    this->MinimumDamage = 0.00f;
    this->ExplosionLoudness = 0.00f;
    this->EffectPreventionChannel = ECC_WorldStatic;
    this->DamageTypeClass = NULL;
    this->ShotImpactType = NULL;
}

