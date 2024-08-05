#include "IGS_ChargedShooter.h"
#include "EIGS_WeaponAttackType.h"
#include "ComponentInstanceDataCache.h"

UIGS_ChargedShooter::UIGS_ChargedShooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ChargeDuration = 1.000000000e+00f;
    (*this).DischargeAfter = 1.000000000e+00f;
    (*this).ShooterType = EIGS_WeaponAttackType::AT_Charged;
}


