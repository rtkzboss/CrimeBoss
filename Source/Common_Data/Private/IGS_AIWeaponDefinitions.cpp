#include "IGS_AIWeaponDefinitions.h"

FIGS_AIWeaponDefinitions::FIGS_AIWeaponDefinitions() {
    this->HeisterDamage = 0.00f;
    this->EnemyDamage = 0.00f;
    this->BaseSpread = 0.00f;
    this->EffectiveRange = 0.00f;
    this->MaxRange = 0.00f;
    this->LineTraceEndRange = 0.00f;
    this->MinDamageMultiplier = 0.00f;
    this->ReloadTime = 0.00f;
    this->ProjectilesPerShot = 0;
    this->bOverridePrimaryShooter = false;
    this->PrimaryShooterOverride = EIGS_WeaponAttackType::AT_SemiAuto;
}

