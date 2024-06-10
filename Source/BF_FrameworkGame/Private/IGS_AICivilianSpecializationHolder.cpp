#include "IGS_AICivilianSpecializationHolder.h"
#include "GameplayTagContainer.h"

FIGS_AICivilianSpecializationHolder::FIGS_AICivilianSpecializationHolder() {
    (*this).Default.Stats.HP.Overload = 0.000000000e+00f;
    (*this).Default.Stats.HP.Value = 0.000000000e+00f;
    (*this).Default.Stats.HP.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.HP.bOverloadValue = false;
    (*this).Default.Stats.Shield.Overload = 0.000000000e+00f;
    (*this).Default.Stats.Shield.Value = 0.000000000e+00f;
    (*this).Default.Stats.Shield.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.Shield.bOverloadValue = false;
    (*this).Default.Stats.WeaponDamage.Overload = 0.000000000e+00f;
    (*this).Default.Stats.WeaponDamage.Value = 0.000000000e+00f;
    (*this).Default.Stats.WeaponDamage.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.WeaponDamage.bOverloadValue = false;
    (*this).Default.Stats.MeleeDamage.Overload = 0.000000000e+00f;
    (*this).Default.Stats.MeleeDamage.Value = 0.000000000e+00f;
    (*this).Default.Stats.MeleeDamage.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.MeleeDamage.bOverloadValue = false;
    (*this).Default.Stats.WeaponDispersion.Overload = 0.000000000e+00f;
    (*this).Default.Stats.WeaponDispersion.Value = 0.000000000e+00f;
    (*this).Default.Stats.WeaponDispersion.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.WeaponDispersion.bOverloadValue = false;
    (*this).Default.Stats.MovementSpeed.Overload = 0.000000000e+00f;
    (*this).Default.Stats.MovementSpeed.Value = 0.000000000e+00f;
    (*this).Default.Stats.MovementSpeed.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.MovementSpeed.bOverloadValue = false;
    (*this).Default.Stats.CoverStickiness.Overload = 0.000000000e+00f;
    (*this).Default.Stats.CoverStickiness.Value = 0.000000000e+00f;
    (*this).Default.Stats.CoverStickiness.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.CoverStickiness.bOverloadValue = false;
    (*this).Default.Stats.ReactionIntensity.Overload = 0.000000000e+00f;
    (*this).Default.Stats.ReactionIntensity.Value = 0.000000000e+00f;
    (*this).Default.Stats.ReactionIntensity.Multiplier = 1.000000000e+00f;
    (*this).Default.Stats.ReactionIntensity.bOverloadValue = false;
    (*this).Default.Enabled = true;
    (*this).Default.Character.Controller = nullptr;
    (*this).Default.Character.Pawns.Empty();
    (*this).Default.Loadout.WeaponPool.PrimaryWeapons.Empty();
    (*this).Default.Loadout.WeaponPool.SecondaryWeapons.Empty();
    (*this).Default.Loadout.WeaponPool.MeleeWeapons.Empty();
    (*this).Default.Loadout.WeaponProbability.Empty();
    (*this).Default.Loadout.NoThrowableChance = 0;
    (*this).Default.Loadout.ThrowablePool.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Default.Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Default.Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Default.Specialization, 0)) = TEXT("AI.Specialization.Default");
}

