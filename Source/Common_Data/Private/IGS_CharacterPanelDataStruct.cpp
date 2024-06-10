#include "IGS_CharacterPanelDataStruct.h"

FIGS_CharacterPanelDataStruct::FIGS_CharacterPanelDataStruct() {
    (*this).Health = 0;
    (*this).Revives = 0;
    (*this).MissionCut = 0;
    (*this).XP = 0.000000000e+00f;
    (*this).Level = 0;
    auto& gen1789 = (*this).PerkTags;
    gen1789.Empty();
    auto& gen1790 = (*this).Perks;
    gen1790.Empty();
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*this).Loadout.PrimaryWeaponClass = nullptr;
    auto& gen1791 = (*this).Loadout.PrimaryPersonalWeapons;
    gen1791.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    auto& gen1792 = (*this).Loadout.PrimaryPersonalWeaponsClass;
    gen1792.Empty();
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*this).Loadout.SecondaryWeaponClass = nullptr;
    auto& gen1793 = (*this).Loadout.SecondaryPersonalWeapons;
    gen1793.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    auto& gen1794 = (*this).Loadout.SecondaryPersonalWeaponsClass;
    gen1794.Empty();
    (*this).Loadout.SelectedEquipment = nullptr;
    auto& gen1795 = (*this).Loadout.ChainEquipments;
    gen1795.Empty();
    auto& gen1796 = (*this).Loadout.ChainEquipmentsObjects;
    gen1796.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.CharacterSkin, 0)) = NAME_None;
    (*this).Loadout.Ability1ChargesLeft = -1;
}

