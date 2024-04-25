#include "IGS_AutomaticShooter.h"
#include "EIGS_WeaponAttackType.h"

UIGS_AutomaticShooter::UIGS_AutomaticShooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShooterType = EIGS_WeaponAttackType::AT_FullAuto;
    this->bForceFeedbackLooped = true;
}


