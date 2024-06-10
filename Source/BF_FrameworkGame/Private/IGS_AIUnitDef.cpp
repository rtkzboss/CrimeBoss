#include "IGS_AIUnitDef.h"
#include "EIGS_CoverPreset.h"

FIGS_AIUnitDef::FIGS_AIUnitDef() {
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*this).Loadout.MeleeWeapon = nullptr;
    auto& gen2551 = (*this).ThrowablePool;
    gen2551.Empty();
    (*this).Stats.HP = 2.800000000e+02f;
    (*this).Stats.Shield = 0.000000000e+00f;
    (*this).Stats.WeaponDamage = 1.000000000e+00f;
    (*this).Stats.MeleeDamage = 1.000000000e+00f;
    (*this).Stats.WeaponDispersion = 1.000000000e+00f;
    (*this).Stats.MovementSpeed = 1.000000000e+00f;
    (*this).Stats.CoverPreset = EIGS_CoverPreset::AICS_None;
    (*this).Stats.CoverStickiness = 5.000000000e-01f;
    (*this).Stats.ReactionIntensity = 5.000000000e-01f;
    (*this).StatsMultiplierGE = nullptr;
    (*this).Tier = EIGS_AITiers::AT_Unknown;
    (*this).TeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).Variation = 0;
    (*this).Specialization = EIGS_UnitSpecialization::US_Unknown;
    (*this).IsMeleeOnly = false;
    (*this).Source = EIGS_AIUnitDBSource::US_Old;
}

