#include "IGS_DamageTypeMelee.h"
#include "EIGS_DamageType.h"

UIGS_DamageTypeMelee::UIGS_DamageTypeMelee() {
    this->DamageType = EIGS_DamageType::Melee;
    this->bShouldBeAffectedByDamageLimiter = true;
    this->DamageMeleeType = EDamageMeleeType::Default;
}


