#include "IGS_CustomShooter.h"
#include "EIGS_WeaponAttackType.h"

UIGS_CustomShooter::UIGS_CustomShooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShooterType = EIGS_WeaponAttackType::AT_Custom;
}


