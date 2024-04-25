#include "IGS_WeaponBashAttackDefinition.h"

FIGS_WeaponBashAttackDefinition::FIGS_WeaponBashAttackDefinition() {
    this->AttackType = EIGS_MeleeAttackType::MAT_Bash;
    this->DamageType = NULL;
    this->ImpactType = NULL;
    this->BaseDamage = 0.00f;
    this->MaxRange = 0.00f;
    this->TraceRadius = 0.00f;
}

