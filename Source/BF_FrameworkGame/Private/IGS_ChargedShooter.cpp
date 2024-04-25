#include "IGS_ChargedShooter.h"
#include "EIGS_WeaponAttackType.h"

UIGS_ChargedShooter::UIGS_ChargedShooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShooterType = EIGS_WeaponAttackType::AT_Charged;
    this->ChargeDuration = 1.00f;
    this->DischargeAfter = 1.00f;
}


