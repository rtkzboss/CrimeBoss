#include "IGS_WeaponBashAttackDefinition.h"

FIGS_WeaponBashAttackDefinition::FIGS_WeaponBashAttackDefinition() {
    (*this).AttackType = EIGS_MeleeAttackType::MAT_Bash;
    (*this).DamageType = nullptr;
    (*this).ImpactType = nullptr;
    (*this).BaseDamage = 5.000000000e+01f;
    (*this).MaxRange = 1.000000000e+02f;
    (*this).TraceRadius = 3.000000000e+01f;
}

