#include "IGS_WeaponAttackDefinition.h"

FIGS_WeaponAttackDefinition::FIGS_WeaponAttackDefinition() {
    this->ProjectileClass = NULL;
    this->BaseDamage = 0.00f;
    this->EffectiveRange = 0.00f;
    this->MaxRange = 0.00f;
    this->MinDamageMultiplier = 0.00f;
    this->RoundsPerMinute = 0.00f;
    this->SemiAutoDelay = 0.00f;
    this->BurstDelay = 0.00f;
    this->ProjectilesPerShot = 0;
    this->ShooterTypes = 0;
}

