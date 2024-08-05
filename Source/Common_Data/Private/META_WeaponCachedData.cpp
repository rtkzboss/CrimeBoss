#include "META_WeaponCachedData.h"

FMETA_WeaponCachedData::FMETA_WeaponCachedData() {
    (*this).Weapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).WeaponTag, 0)) = NAME_None;
}

