#include "IGS_AIBaseUnitDef.h"
#include "GameplayTagContainer.h"
#include "EIGS_CoverPreset.h"

FIGS_AIBaseUnitDef::FIGS_AIBaseUnitDef() {
    (*this).Stats.HP = 2.800000000e+02f;
    (*this).Stats.Shield = 0.000000000e+00f;
    (*this).Stats.WeaponDamage = 1.000000000e+00f;
    (*this).Stats.MeleeDamage = 1.000000000e+00f;
    (*this).Stats.WeaponDispersion = 1.000000000e+00f;
    (*this).Stats.MovementSpeed = 1.000000000e+00f;
    (*this).Stats.CoverPreset = EIGS_CoverPreset::AICS_None;
    (*this).Stats.CoverStickiness = 5.000000000e-01f;
    (*this).Stats.ReactionIntensity = 5.000000000e-01f;
    auto& gen2546 = (*this).Loadout.WeaponPool.PrimaryWeapons;
    gen2546.Empty();
    auto& gen2547 = (*this).Loadout.WeaponPool.SecondaryWeapons;
    gen2547.Empty();
    auto& gen2548 = (*this).Loadout.WeaponPool.MeleeWeapons;
    gen2548.Empty();
    auto& gen2549 = (*this).Loadout.WeaponProbability;
    gen2549.Empty();
    (*this).Loadout.NoThrowableChance = 0;
    auto& gen2550 = (*this).Loadout.ThrowablePool;
    gen2550.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Loadout.ShowNoThrowableBool = 0;
}

