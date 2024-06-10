#include "IGS_WeaponSkinStruct.h"

FIGS_WeaponSkinStruct::FIGS_WeaponSkinStruct() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).TagID, 0)) = NAME_None;
}

