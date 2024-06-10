#include "CommonHeisterLoadout.h"

FCommonHeisterLoadout::FCommonHeisterLoadout() {
    (*this).PrimaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).SecondaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).Equipment.Empty();
    (*this).Perks.Empty();
    (*this).Ability1ChargesLeft = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CharacterSkinID, 0)) = NAME_None;
}

