#include "IGS_AICopTeamDef.h"
#include "EIGS_CoverPreset.h"
#include "EIGS_TeamSideEnum.h"

FIGS_AICopTeamDef::FIGS_AICopTeamDef() {
    (*this).DefaultStats.HP = 2.800000000e+02f;
    (*this).DefaultStats.Shield = 0.000000000e+00f;
    (*this).DefaultStats.WeaponDamage = 1.000000000e+00f;
    (*this).DefaultStats.MeleeDamage = 1.000000000e+00f;
    (*this).DefaultStats.WeaponDispersion = 1.000000000e+00f;
    (*this).DefaultStats.MovementSpeed = 1.000000000e+00f;
    (*this).DefaultStats.CoverPreset = EIGS_CoverPreset::AICS_None;
    (*this).DefaultStats.CoverStickiness = 5.000000000e-01f;
    (*this).DefaultStats.ReactionIntensity = 5.000000000e-01f;
    (*this).TeamSide = EIGS_TeamSideEnum::TS_Cops;
}

