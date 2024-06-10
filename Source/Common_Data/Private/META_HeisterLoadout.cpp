#include "META_HeisterLoadout.h"

FMETA_HeisterLoadout::FMETA_HeisterLoadout() {
    (*this).PrimaryWeapon = nullptr;
    (*this).PrimaryWeaponClass = nullptr;
    auto& gen1797 = (*this).PrimaryPersonalWeapons;
    gen1797.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).PrimaryWeaponSkin, 0)) = NAME_None;
    auto& gen1798 = (*this).PrimaryPersonalWeaponsClass;
    gen1798.Empty();
    (*this).SecondaryWeapon = nullptr;
    (*this).SecondaryWeaponClass = nullptr;
    auto& gen1799 = (*this).SecondaryPersonalWeapons;
    gen1799.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).SecondaryWeaponSkin, 0)) = NAME_None;
    auto& gen1800 = (*this).SecondaryPersonalWeaponsClass;
    gen1800.Empty();
    (*this).SelectedEquipment = nullptr;
    auto& gen1801 = (*this).ChainEquipments;
    gen1801.Empty();
    auto& gen1802 = (*this).ChainEquipmentsObjects;
    gen1802.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CharacterSkin, 0)) = NAME_None;
    (*this).Ability1ChargesLeft = -1;
}

