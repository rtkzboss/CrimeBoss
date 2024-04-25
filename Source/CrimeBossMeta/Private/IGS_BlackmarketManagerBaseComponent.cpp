#include "IGS_BlackmarketManagerBaseComponent.h"

UIGS_BlackmarketManagerBaseComponent::UIGS_BlackmarketManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsManagerDataDirty = false;
    this->bIsManagerInitialized = false;
}

bool UIGS_BlackmarketManagerBaseComponent::IsManagerInitialized() const {
    return false;
}

TArray<UMETA_Weapon*> UIGS_BlackmarketManagerBaseComponent::GetWeaponsMarketPool() const {
    return TArray<UMETA_Weapon*>();
}

UMETA_Weapon* UIGS_BlackmarketManagerBaseComponent::GetWeaponByTag(FGameplayTag inWeaponTag) const {
    return NULL;
}

TArray<UMETA_Equipment*> UIGS_BlackmarketManagerBaseComponent::GetEquipmentMarketPool() const {
    return TArray<UMETA_Equipment*>();
}

UMETA_Equipment* UIGS_BlackmarketManagerBaseComponent::GetEquipmentByTag(FGameplayTag inEquipmentTag) const {
    return NULL;
}

TArray<UMETA_Character*> UIGS_BlackmarketManagerBaseComponent::GetCharactersMarketPool() const {
    return TArray<UMETA_Character*>();
}

UMETA_Character* UIGS_BlackmarketManagerBaseComponent::GetCharacterByTag(FGameplayTag inCharacterTag) const {
    return NULL;
}

bool UIGS_BlackmarketManagerBaseComponent::BuyItem_Implementation(FGameplayTag itemTag, FGameplayTag ScreenTag) {
    return false;
}


