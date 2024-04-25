#include "IGS_Quickplay_BlackMarketManagerComponent.h"

UIGS_Quickplay_BlackMarketManagerComponent::UIGS_Quickplay_BlackMarketManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}



void UIGS_Quickplay_BlackMarketManagerComponent::RemoveItem(FGameplayTag inItemTag) {
}


bool UIGS_Quickplay_BlackMarketManagerComponent::IsItemInPool(FGameplayTag inItemTag) const {
    return false;
}

TArray<UMETA_WeaponSkin*> UIGS_Quickplay_BlackMarketManagerComponent::GetWeaponSkinsMarketPool() const {
    return TArray<UMETA_WeaponSkin*>();
}

TArray<UMETA_WeaponSkin*> UIGS_Quickplay_BlackMarketManagerComponent::GetWeaponSkinsForWeapon(FGameplayTag inItemTag) const {
    return TArray<UMETA_WeaponSkin*>();
}

UMETA_WeaponSkin* UIGS_Quickplay_BlackMarketManagerComponent::GetWeaponSkinByTag(FGameplayTag inItemTag) const {
    return NULL;
}

TArray<UMETA_Perk*> UIGS_Quickplay_BlackMarketManagerComponent::GetPerksMarketPool() const {
    return TArray<UMETA_Perk*>();
}

UMETA_Perk* UIGS_Quickplay_BlackMarketManagerComponent::GetPerkByTag(FGameplayTag inItemTag) const {
    return NULL;
}

TArray<UMETA_CharacterSkin*> UIGS_Quickplay_BlackMarketManagerComponent::GetBossCharacterSkinsMarketPool() const {
    return TArray<UMETA_CharacterSkin*>();
}

UMETA_CharacterSkin* UIGS_Quickplay_BlackMarketManagerComponent::GetBossCharacterSkinByTag(FGameplayTag inItemTag) const {
    return NULL;
}




void UIGS_Quickplay_BlackMarketManagerComponent::AddItemToPool(FGameplayTag inItemTag) {
}

void UIGS_Quickplay_BlackMarketManagerComponent::AddItemsToPool(FGameplayTagContainer inItemTags) {
}


