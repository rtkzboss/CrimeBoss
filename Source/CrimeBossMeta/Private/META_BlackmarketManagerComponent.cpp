#include "META_BlackmarketManagerComponent.h"
#include "Templates/SubclassOf.h"

UMETA_BlackmarketManagerComponent::UMETA_BlackmarketManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericPrevID = 0;
    this->DayWhenHeistersMarketBecameAvailable = 0;
    this->DayWhenWeaponsMarketBecameAvailable = 0;
    this->AmountOfBoughtCheapHeisters = 0;
    this->RefreshWeaponsPoolCounter = 0;
    this->RefreshHeistersPoolCounter = 0;
    this->RefreshWeaponsPoolStartPrice = 0;
    this->RefreshHeistersPoolStartPrice = 0;
    this->BaseDayForLootEvents = 0;
    this->BaseDayForWeaponEvents = 0;
    this->BaseDayForHireArmyEvent = 0;
    this->AmountOfGeneratedSoldiers = 0;
    this->IsHireArmyEventClamped = false;
    this->BaseDayForEquipmentEvent = 0;
}

void UMETA_BlackmarketManagerComponent::ProcessWeaponEvent() {
}

void UMETA_BlackmarketManagerComponent::ProcessUnseenUnlockedItemsFromQuickplay() {
}

void UMETA_BlackmarketManagerComponent::ProcessHireArmyEvent() {
}

bool UMETA_BlackmarketManagerComponent::IsWeaponEventActive() const {
    return false;
}


bool UMETA_BlackmarketManagerComponent::IsHireArmyEventUnlocked() const {
    return false;
}

bool UMETA_BlackmarketManagerComponent::IsHireArmyEventActive() const {
    return false;
}

bool UMETA_BlackmarketManagerComponent::IsEquipmentEventActive() const {
    return false;
}

bool UMETA_BlackmarketManagerComponent::IsBMLootEventReady_Implementation() const {
    return false;
}

int32 UMETA_BlackmarketManagerComponent::GetWeaponsPoolRefreshPrice_Implementation() const {
    return 0;
}

TArray<UMETA_Weapon*> UMETA_BlackmarketManagerComponent::GetWeaponsPoolForBMWeaponEvent() const {
    return TArray<UMETA_Weapon*>();
}

FGameplayTag UMETA_BlackmarketManagerComponent::GetWeaponEventUnlockTag() const {
    return FGameplayTag{};
}

TArray<UMETA_Character*> UMETA_BlackmarketManagerComponent::GetUniqueHeistersPoolForBlackmarket(EMETA_RespectLvl inCurrentBossStatus, int32 inTargetAmountOfUnseenItemsForPurchase) {
    return TArray<UMETA_Character*>();
}

TArray<UMETA_PlotlineAsset*> UMETA_BlackmarketManagerComponent::GetPlotlineAssetsPool() const {
    return TArray<UMETA_PlotlineAsset*>();
}

int32 UMETA_BlackmarketManagerComponent::GetNextUniqueGenericID() {
    return 0;
}

TSet<int32> UMETA_BlackmarketManagerComponent::GetManyUniqueGenericIDs(int32 inAmount) {
    return TSet<int32>();
}

TArray<TSubclassOf<UIGS_EquipmentInventoryObject>> UMETA_BlackmarketManagerComponent::GetLockedEquipmentIDsForCurrentBMEquipmentEvent_Implementation() const {
    return TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>();
}

FGameplayTag UMETA_BlackmarketManagerComponent::GetHireArmyEventUnlockTag() const {
    return FGameplayTag{};
}

FMETA_ArmyTierConfiguration UMETA_BlackmarketManagerComponent::GetHireArmyEventData_Implementation(bool& bActive) const {
    return FMETA_ArmyTierConfiguration{};
}

int32 UMETA_BlackmarketManagerComponent::GetHeistersPoolRefreshPrice_Implementation() const {
    return 0;
}

TArray<UMETA_Equipment*> UMETA_BlackmarketManagerComponent::GetEquipmentPoolForBMEquipmentEvent() const {
    return TArray<UMETA_Equipment*>();
}

int32 UMETA_BlackmarketManagerComponent::GetCostOfSoldierForHire(EMETA_RespectLvl inRespect) const {
    return 0;
}

bool UMETA_BlackmarketManagerComponent::GetBPEventWeaponInfoByCurrentBossRespect(FMETA_BMEventWeaponData& outWeaponEventData) {
    return false;
}

bool UMETA_BlackmarketManagerComponent::GetBPEventEquipmentInfoByCurrentBossRespect(FMETA_BMEventEquipmentData& outEquipmentEventData) {
    return false;
}

TMap<FMETA_VendorLootKey, FMETA_BMEventLootData> UMETA_BlackmarketManagerComponent::GetBMEventLootDataForVendors() const {
    return TMap<FMETA_VendorLootKey, FMETA_BMEventLootData>();
}

int32 UMETA_BlackmarketManagerComponent::GetAmountOfSoldiersCanBeBought_Implementation() {
    return 0;
}

int32 UMETA_BlackmarketManagerComponent::GetAmountOfGeneratedSoldiers() const {
    return 0;
}

bool UMETA_BlackmarketManagerComponent::ForceWeaponsPoolRefresh_Implementation() {
    return false;
}

bool UMETA_BlackmarketManagerComponent::ForceHeistersPoolRefresh_Implementation() {
    return false;
}

void UMETA_BlackmarketManagerComponent::Debug_ProcessWeaponEvent() {
}

void UMETA_BlackmarketManagerComponent::CheckWeaponEventFinished() {
}

void UMETA_BlackmarketManagerComponent::CheckHireArmyEventFinished() {
}

void UMETA_BlackmarketManagerComponent::CheckEquipmentEventFinished() {
}

bool UMETA_BlackmarketManagerComponent::CanWeaponEventBeTriggered() {
    return false;
}

void UMETA_BlackmarketManagerComponent::BuySoldiers_Implementation(int32 inAmount, int32& outAmountOfSoldiersBought) {
}

void UMETA_BlackmarketManagerComponent::AddUniqueHeisterToMarketPool(EIGS_CharacterID inCharacterID, bool inIgnoreLock) {
}

void UMETA_BlackmarketManagerComponent::ActivateLootEventByVendor_Implementation(FMETA_VendorLootKey inVendorLootKey) {
}


