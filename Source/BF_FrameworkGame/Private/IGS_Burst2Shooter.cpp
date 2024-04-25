#include "IGS_Burst2Shooter.h"
#include "EIGS_WeaponAttackType.h"

UIGS_Burst2Shooter::UIGS_Burst2Shooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShooterType = EIGS_WeaponAttackType::AT_Burst2;
}


