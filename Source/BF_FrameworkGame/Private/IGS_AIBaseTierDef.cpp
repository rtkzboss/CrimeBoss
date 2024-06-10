#include "IGS_AIBaseTierDef.h"

FIGS_AIBaseTierDef::FIGS_AIBaseTierDef() {
    (*this).Enabled = true;
    auto& gen2532 = (*this).Character.Pawns;
    gen2532.Empty();
    auto& gen2533 = (*this).Loadout.WeaponPool.PrimaryWeapons;
    gen2533.Empty();
    auto& gen2534 = (*this).Loadout.WeaponPool.SecondaryWeapons;
    gen2534.Empty();
    auto& gen2535 = (*this).Loadout.WeaponPool.MeleeWeapons;
    gen2535.Empty();
    auto& gen2536 = (*this).Loadout.WeaponProbability;
    gen2536.Empty();
    (*this).Loadout.NoThrowableChance = 0;
    auto& gen2537 = (*this).Loadout.ThrowablePool;
    gen2537.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Specialization, 0)) = TEXT("AI.Specialization.Default");
}

