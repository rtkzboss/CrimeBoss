#include "META_WeaponClassChance.h"

FMETA_WeaponClassChance::FMETA_WeaponClassChance() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).WeaponClass, 0)) = NAME_None;
    (*this).Chance = 0;
}

