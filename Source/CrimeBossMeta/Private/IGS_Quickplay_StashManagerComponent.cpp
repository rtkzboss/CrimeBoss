#include "IGS_Quickplay_StashManagerComponent.h"

UIGS_Quickplay_StashManagerComponent::UIGS_Quickplay_StashManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_Quickplay_StashManagerComponent::SetWeaponSkin(UMETA_Weapon* inWeapon, FGameplayTag inSkinTag) {
}

void UIGS_Quickplay_StashManagerComponent::RemoveItems(FGameplayTagContainer inItemTags) {
}

void UIGS_Quickplay_StashManagerComponent::RemoveItem(FGameplayTag inItemTag) {
}

bool UIGS_Quickplay_StashManagerComponent::IsItemOwned(FGameplayTag inItemTag) const {
    return false;
}

TArray<UMETA_WeaponSkin*> UIGS_Quickplay_StashManagerComponent::GetWeaponSkinsForWeapon(FGameplayTag inItemTag) const {
    return TArray<UMETA_WeaponSkin*>();
}

TArray<UMETA_WeaponSkin*> UIGS_Quickplay_StashManagerComponent::GetWeaponSkins() const {
    return TArray<UMETA_WeaponSkin*>();
}

UMETA_WeaponSkin* UIGS_Quickplay_StashManagerComponent::GetWeaponSkinByTag(FGameplayTag inItemTag) const {
    return NULL;
}

TArray<UMETA_Weapon*> UIGS_Quickplay_StashManagerComponent::GetWeapons() const {
    return TArray<UMETA_Weapon*>();
}

UMETA_Weapon* UIGS_Quickplay_StashManagerComponent::GetWeaponByTag(FGameplayTag inItemTag) const {
    return NULL;
}

TArray<UMETA_Weapon*> UIGS_Quickplay_StashManagerComponent::GetSecondaryWeapons() const {
    return TArray<UMETA_Weapon*>();
}

TArray<UMETA_Weapon*> UIGS_Quickplay_StashManagerComponent::GetPrimaryWeapons() const {
    return TArray<UMETA_Weapon*>();
}

TArray<UMETA_Perk*> UIGS_Quickplay_StashManagerComponent::GetPerks() const {
    return TArray<UMETA_Perk*>();
}

UMETA_Perk* UIGS_Quickplay_StashManagerComponent::GetPerkByTag(FGameplayTag inItemTag) const {
    return NULL;
}

UMETA_Equipment* UIGS_Quickplay_StashManagerComponent::GetEquipmentByTag(FGameplayTag inItemTag) const {
    return NULL;
}

TArray<UMETA_Equipment*> UIGS_Quickplay_StashManagerComponent::GetEquipment() const {
    return TArray<UMETA_Equipment*>();
}

TArray<UMETA_CharacterSkin*> UIGS_Quickplay_StashManagerComponent::GetBossCharacterSkins() const {
    return TArray<UMETA_CharacterSkin*>();
}

UMETA_CharacterSkin* UIGS_Quickplay_StashManagerComponent::GetBossCharacterSkinByTag(FGameplayTag inItemTag) const {
    return NULL;
}

void UIGS_Quickplay_StashManagerComponent::AddItems(FGameplayTagContainer inItemTags) {
}

void UIGS_Quickplay_StashManagerComponent::AddItem(FGameplayTag inItem) {
}


