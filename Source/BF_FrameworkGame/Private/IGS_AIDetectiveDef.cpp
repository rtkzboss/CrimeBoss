#include "IGS_AIDetectiveDef.h"

FIGS_AIDetectiveDef::FIGS_AIDetectiveDef() {
    (*this).Name = FText::FromString(TEXT("Detective"));
    (*this).MetaID = nullptr;
    (*this).Stats.HP.Overload = 0.000000000e+00f;
    (*this).Stats.HP.Value = 0.000000000e+00f;
    (*this).Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Stats.HP.bOverloadValue = false;
    (*this).Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Stats.Shield.Value = 0.000000000e+00f;
    (*this).Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Stats.Shield.bOverloadValue = false;
    (*this).Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Stats.WeaponDamage.bOverloadValue = false;
    (*this).Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Stats.MeleeDamage.bOverloadValue = false;
    (*this).Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Stats.MovementSpeed.bOverloadValue = false;
    (*this).Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Stats.CoverStickiness.bOverloadValue = false;
    (*this).Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Stats.ReactionIntensity.bOverloadValue = false;
    (*this).SpecStats.ReviveTimer.Min = 2.000000000e+01f;
    (*this).SpecStats.ReviveTimer.Max = 3.000000000e+01f;
    (*this).SpecStats.DownstateHealth = 2.000000000e+03f;
    (*this).SpecStats.RevivesToRetreat = 3;
    (*this).SpecStats.MaxHealthForReaction = 1.000000000e+00f;
    (*this).SpecStats.MaxHealthForCover = 1.000000000e+00f;
    auto& gen2614 = (*this).Character.Pawns;
    gen2614.Empty();
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*this).Loadout.MeleeWeapon = nullptr;
    auto& gen2615 = (*this).ThrowablePool;
    gen2615.Empty();
    (*this).Variation = EIGS_CopsVariationType::US_Detective;
}

