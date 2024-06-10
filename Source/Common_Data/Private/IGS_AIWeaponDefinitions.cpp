#include "IGS_AIWeaponDefinitions.h"
#include "EIGS_MeleeAttackType.h"

FIGS_AIWeaponDefinitions::FIGS_AIWeaponDefinitions() {
    (*this).HeisterDamage = 1.000000000e+02f;
    (*this).EnemyDamage = 5.000000000e+01f;
    (*this).BaseSpread = 2.000000000e+00f;
    (*this).EffectiveRange = 3.000000000e+04f;
    (*this).MaxRange = 5.000000000e+04f;
    (*this).LineTraceEndRange = 2.000000000e+04f;
    (*this).MinDamageMultiplier = 5.000000000e-01f;
    (*this).ReloadTime = 1.000000000e+00f;
    (*this).ProjectilesPerShot = 1;
    (*this).bOverridePrimaryShooter = false;
    (*this).PrimaryShooterOverride = EIGS_WeaponAttackType::AT_SemiAuto;
    (*this).AIBash.AttackType = EIGS_MeleeAttackType::MAT_Bash;
    (*this).AIBash.DamageType = nullptr;
    (*this).AIBash.ImpactType = nullptr;
    (*this).AIBash.BaseDamage = 5.000000000e+01f;
    (*this).AIBash.MaxRange = 1.000000000e+02f;
    (*this).AIBash.TraceRadius = 3.000000000e+01f;
}

