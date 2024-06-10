#include "META_HeisterRandomizedData.h"
#include "GameplayTagContainer.h"

FMETA_HeisterRandomizedData::FMETA_HeisterRandomizedData() {
    (*this).FinalCost = 0;
    (*this).FinalUpkeep = 0;
    (*this).MissionCut = 0;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Traits, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Traits, 0)).Empty();
    (*this).Perks.Empty();
    (*this).Loadout.PrimaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.PrimaryWeaponSkin, 0)) = NAME_None;
    (*this).Loadout.SecondaryWeapon = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.SecondaryWeaponSkin, 0)) = NAME_None;
    (*this).Loadout.Equipment.Empty();
    (*this).Loadout.Perks.Empty();
    (*this).Loadout.Ability1ChargesLeft = -1;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Loadout.CharacterSkinID, 0)) = NAME_None;
}

