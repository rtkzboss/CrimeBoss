#include "IGS_StashManagerBaseComponent.h"
#include "Templates/SubclassOf.h"

UIGS_StashManagerBaseComponent::UIGS_StashManagerBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsManagerDataDirty = false;
    this->bIsManagerInitialized = false;
}

bool UIGS_StashManagerBaseComponent::UpgradeWeapon_Implementation(UMETA_Weapon* inWeapon, TSubclassOf<UMETA_WeaponInventoryObject> inTargetWeapon) {
    return false;
}

void UIGS_StashManagerBaseComponent::SellWeaponFromStash_Implementation(UMETA_Weapon* inWeapon) {
}

void UIGS_StashManagerBaseComponent::SellEquipmentFromStash_Implementation(UMETA_Equipment* inEquipment) {
}

void UIGS_StashManagerBaseComponent::RemoveWeaponsFromStash_Implementation(TSubclassOf<UMETA_WeaponInventoryObject> inWeaponsId, int32 inAmount, bool inBetweenHeisterAndStash, int32& outRemovedAmount) {
}

bool UIGS_StashManagerBaseComponent::IsManagerInitialized() const {
    return false;
}

TMap<FGameplayTag, int32> UIGS_StashManagerBaseComponent::GetTradeableLoot_Implementation() {
    return TMap<FGameplayTag, int32>();
}

TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo> UIGS_StashManagerBaseComponent::GetStashWeapons_Implementation(bool inIsLobby) {
    return TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo>();
}

TArray<UMETA_Equipment*> UIGS_StashManagerBaseComponent::GetStashUnequippedEquipment_Implementation() const {
    return TArray<UMETA_Equipment*>();
}

TArray<UMETA_Equipment*> UIGS_StashManagerBaseComponent::GetStashEquipment_Implementation() const {
    return TArray<UMETA_Equipment*>();
}

EMETA_RespectLvl UIGS_StashManagerBaseComponent::GetRespectLvl_Implementation() {
    return EMETA_RespectLvl::Low;
}

int32 UIGS_StashManagerBaseComponent::GetPlayersArmySize_Implementation() {
    return 0;
}

int32 UIGS_StashManagerBaseComponent::GetPlayersArmyAvailableAmount_Implementation() {
    return 0;
}

int32 UIGS_StashManagerBaseComponent::GetPawnShopLootValueLimit_Implementation() {
    return 0;
}

int32 UIGS_StashManagerBaseComponent::GetPawnShopCurrentSellingLootValue_Implementation() {
    return 0;
}

void UIGS_StashManagerBaseComponent::GetModifiersForPriceForSellingLoot_Implementation(FGameplayTag inMainLootTag, float& outTrendModifier, float& outBaseModifier) {
}

int32 UIGS_StashManagerBaseComponent::GetLootValueByLootTag_Implementation(FGameplayTag inLootTag) {
    return 0;
}

TMap<FGameplayTag, int32> UIGS_StashManagerBaseComponent::GetLoot_Implementation() {
    return TMap<FGameplayTag, int32>();
}

FMETA_CharacterID UIGS_StashManagerBaseComponent::GetBossCharacterID() {
    return FMETA_CharacterID{};
}

TArray<EMETA_TradeVendor> UIGS_StashManagerBaseComponent::GetAvailableVendorsForTradeByValue_Implementation(FGameplayTag inLootTag, int32 inMonetaryValue) {
    return TArray<EMETA_TradeVendor>();
}

int32 UIGS_StashManagerBaseComponent::GetActualPriceForSellingLoot_Implementation(FGameplayTag inLootTag, int32 inAmount) {
    return 0;
}

TArray<FGameplayTag> UIGS_StashManagerBaseComponent::GetAccountPlotlineAssetsTags_Implementation() {
    return TArray<FGameplayTag>();
}

void UIGS_StashManagerBaseComponent::FilterAvailableWeapons_Implementation(const TArray<FMETA_WeaponAmountInfo>& inWeaponArray, TArray<FMETA_WeaponAmountInfo>& outWeaponArray) {
}

bool UIGS_StashManagerBaseComponent::CanWeaponBeUpgraded_Implementation(UMETA_Weapon* inWeapon) {
    return false;
}

void UIGS_StashManagerBaseComponent::AddWeaponsToStash_Implementation(TSubclassOf<UMETA_WeaponInventoryObject> inWeaponsId, int32 inAmount, bool inBetweenHeisterAndStash) {
}


