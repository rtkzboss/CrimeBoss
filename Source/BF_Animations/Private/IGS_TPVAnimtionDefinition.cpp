#include "IGS_TPVAnimtionDefinition.h"

FIGS_TPVAnimtionDefinition::FIGS_TPVAnimtionDefinition() {
    this->AttackType = EIGS_WeaponAttackType::AT_SemiAuto;
    this->WeaponFireStandFront = NULL;
    this->WeaponFireStandFrontInjured = NULL;
    this->WeaponFire_WeaponActor = NULL;
    this->IsMontageLooping = false;
    this->ShooterChangeMontage = NULL;
    this->AttackPlayRate = 0.00f;
}

