#include "IGS_AIWeaponDef.h"

FIGS_AIWeaponDef::FIGS_AIWeaponDef() {
    (*this).WeaponDefinition = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).WeaponTag, 0)) = TEXT("Item.Wieldable.Weapon");
}

