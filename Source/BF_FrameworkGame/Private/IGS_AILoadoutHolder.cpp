#include "IGS_AILoadoutHolder.h"

FIGS_AILoadoutHolder::FIGS_AILoadoutHolder() {
    (*this).WeaponPool.PrimaryWeapons.Empty();
    (*this).WeaponPool.SecondaryWeapons.Empty();
    (*this).WeaponPool.MeleeWeapons.Empty();
    (*this).WeaponProbability.Empty();
    (*this).NoThrowableChance = 0;
    (*this).ThrowablePool.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).ShowNoThrowableBool = 0;
}

