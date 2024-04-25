#include "IGS_DamageTypeBullet.h"
#include "EIGS_DamageType.h"

UIGS_DamageTypeBullet::UIGS_DamageTypeBullet() {
    this->DamageType = EIGS_DamageType::Bullet;
    this->bShouldBeAffectedByDamageLimiter = true;
}


