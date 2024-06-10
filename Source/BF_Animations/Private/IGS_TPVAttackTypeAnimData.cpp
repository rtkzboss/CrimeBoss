#include "IGS_TPVAttackTypeAnimData.h"
#include "EIGS_WeaponAttackType.h"

FIGS_TPVAttackTypeAnimData::FIGS_TPVAttackTypeAnimData() {
    (*this).AnimationTypeData.AttackType = EIGS_WeaponAttackType::AT_UNKNOWN;
    (*this).AnimationTypeData.WeaponFireStandFront = nullptr;
    (*this).AnimationTypeData.WeaponFireStandFrontInjured = nullptr;
    (*this).AnimationTypeData.WeaponFire_WeaponActor = nullptr;
    (*this).AnimationTypeData.IsMontageLooping = false;
    (*this).AnimationTypeData.ShooterChangeMontage = nullptr;
    (*this).AnimationTypeData.AttackPlayRate = 1.000000000e+00f;
}

