#include "IGS_CharacterPanelDataStruct.h"

FIGS_CharacterPanelDataStruct::FIGS_CharacterPanelDataStruct() {
    (*this).Health = 0;
    (*this).Revives = 0;
    (*this).MissionCut = 0;
    (*this).XP = 0.000000000e+00f;
    (*this).Level = 0;
    (*this).PerkTags.Empty();
    (*this).Perks.Empty();
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*this).Loadout.PrimaryWeaponClass = nullptr;
    (*this).Loadout.PrimaryPersonalWeapons.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).Loadout.PrimaryPersonalWeaponsClass.Empty();
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*this).Loadout.SecondaryWeaponClass = nullptr;
    (*this).Loadout.SecondaryPersonalWeapons.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).Loadout.SecondaryPersonalWeaponsClass.Empty();
    (*this).Loadout.SelectedEquipment = nullptr;
    (*this).Loadout.ChainEquipments.Empty();
    (*this).Loadout.ChainEquipmentsObjects.Empty();
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.CharacterSkin, 0)) = NAME_None;
    (*this).Loadout.Ability1ChargesLeft = -1;
}

