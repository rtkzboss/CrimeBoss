#include "IGS_ContinuousShooter.h"
#include "EIGS_WeaponAttackType.h"

UIGS_ContinuousShooter::UIGS_ContinuousShooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShooterType = EIGS_WeaponAttackType::AT_Continuous;
    this->m_ActiveProjectile = NULL;
}


