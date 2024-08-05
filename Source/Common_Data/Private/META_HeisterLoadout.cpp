#include "META_HeisterLoadout.h"

FMETA_HeisterLoadout::FMETA_HeisterLoadout() {
    (*this).PrimaryWeapon = nullptr;
    (*this).PrimaryWeaponClass = nullptr;
    (*this).PrimaryPersonalWeapons.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).PrimaryPersonalWeaponsClass.Empty();
    (*this).SecondaryWeapon = nullptr;
    (*this).SecondaryWeaponClass = nullptr;
    (*this).SecondaryPersonalWeapons.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).SecondaryPersonalWeaponsClass.Empty();
    (*this).SelectedEquipment = nullptr;
    (*this).ChainEquipments.Empty();
    (*this).ChainEquipmentsObjects.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CharacterSkin, 0)) = NAME_None;
    (*this).Ability1ChargesLeft = -1;
}

