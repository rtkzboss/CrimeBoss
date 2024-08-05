#include "IGS_AIBaseTierDef.h"

FIGS_AIBaseTierDef::FIGS_AIBaseTierDef() {
    (*this).Enabled = true;
    (*this).Character.Controller = nullptr;
    (*this).Character.Pawns.Empty();
    (*this).Loadout.WeaponPool.PrimaryWeapons.Empty();
    (*this).Loadout.WeaponPool.SecondaryWeapons.Empty();
    (*this).Loadout.WeaponPool.MeleeWeapons.Empty();
    (*this).Loadout.WeaponProbability.Empty();
    (*this).Loadout.NoThrowableChance = 0;
    (*this).Loadout.ThrowablePool.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).Loadout.ShowNoThrowableBool = 0;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Specialization, 0)) = TEXT("AI.Specialization.Default");
}

