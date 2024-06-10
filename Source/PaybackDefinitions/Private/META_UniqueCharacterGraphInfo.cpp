#include "META_UniqueCharacterGraphInfo.h"

FMETA_UniqueCharacterGraphInfo::FMETA_UniqueCharacterGraphInfo() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockTag, 0)) = NAME_None;
    (*this).LoadoutOverride.PrimaryWeapon = nullptr;
    (*this).LoadoutOverride.SecondaryWeapon = nullptr;
    (*this).LoadoutOverride.Equipment.Equipment = nullptr;
}

