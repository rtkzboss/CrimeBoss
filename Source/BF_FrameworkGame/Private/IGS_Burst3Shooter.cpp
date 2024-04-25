#include "IGS_Burst3Shooter.h"
#include "EIGS_WeaponAttackType.h"

UIGS_Burst3Shooter::UIGS_Burst3Shooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShooterType = EIGS_WeaponAttackType::AT_Burst3;
}


