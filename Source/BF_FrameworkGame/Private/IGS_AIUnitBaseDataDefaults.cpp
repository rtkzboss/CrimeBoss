#include "IGS_AIUnitBaseDataDefaults.h"

FIGS_AIUnitBaseDataDefaults::FIGS_AIUnitBaseDataDefaults() {
    this->HP = 0.00f;
    this->Shield = 0.00f;
    this->WeaponDamage = 0.00f;
    this->MeleeDamage = 0.00f;
    this->WeaponDispersion = 0.00f;
    this->MovementSpeed = 0.00f;
    this->CoverPreset = EIGS_CoverPreset::AICS_None;
    this->CoverStickiness = 0.00f;
    this->ReactionIntensity = 0.00f;
}

