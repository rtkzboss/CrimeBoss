#include "IGS_AILoadoutHolder.h"

FIGS_AILoadoutHolder::FIGS_AILoadoutHolder() {
    auto& gen2408 = (*this).WeaponPool.PrimaryWeapons;
    gen2408.Empty();
    auto& gen2409 = (*this).WeaponPool.SecondaryWeapons;
    gen2409.Empty();
    auto& gen2410 = (*this).WeaponPool.MeleeWeapons;
    gen2410.Empty();
    auto& gen2411 = (*this).WeaponProbability;
    gen2411.Empty();
    (*this).NoThrowableChance = 0;
    auto& gen2412 = (*this).ThrowablePool;
    gen2412.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EmptyWeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
    (*this).ShowNoThrowableBool = 0;
}

