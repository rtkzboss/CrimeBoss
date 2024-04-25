#include "IGS_LootBagComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_LootBagComponent::UIGS_LootBagComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanTakeThrownLootBag = true;
    this->bIsEnabled = false;
    this->NewBagCreatedAkEvent = NULL;
    this->HasMaxBagsGameplayEffect = NULL;
    this->CurrentBagsCount = 0;
    this->m_isTransferingBag = false;
}

void UIGS_LootBagComponent::Server_StashPocketLoot_Implementation() {
}

void UIGS_LootBagComponent::Server_SetTransferingBag_Implementation(bool inTransfering) {
}

void UIGS_LootBagComponent::Server_SetPendingCarryable_Implementation(bool inPending) {
}

void UIGS_LootBagComponent::Server_PlayBagCreatedSound_Implementation() {
}

void UIGS_LootBagComponent::Server_NewLootBag_Implementation() {
}

bool UIGS_LootBagComponent::ReceiveBag(TArray<FIGS_LootBagSingleItem> inItemClasses) {
    return false;
}

void UIGS_LootBagComponent::Multicast_PlayBagCreatedSound_Implementation() {
}

bool UIGS_LootBagComponent::IsCarryingLootBag() const {
    return false;
}

bool UIGS_LootBagComponent::IsCarryingLoot() const {
    return false;
}

bool UIGS_LootBagComponent::IsCarrying() const {
    return false;
}

bool UIGS_LootBagComponent::HasMaxBags() const {
    return false;
}

float UIGS_LootBagComponent::GetPlayerLootWeight() {
    return 0.0f;
}

int32 UIGS_LootBagComponent::GetMaxBagsAmount() const {
    return 0;
}

TArray<FIGS_LootBagSingleItem> UIGS_LootBagComponent::GetItemsAndRemoveCurrentlyBeingFilledBag() {
    return TArray<FIGS_LootBagSingleItem>();
}

bool UIGS_LootBagComponent::GetCurrentlyBeingFilledBagBP(FIGS_LootBagInfo& OutInfo) {
    return false;
}

TArray<EIGS_BagType> UIGS_LootBagComponent::GetBagTypes() const {
    return TArray<EIGS_BagType>();
}

TArray<FIGS_LootBagInfo> UIGS_LootBagComponent::GetBagsInfo() const {
    return TArray<FIGS_LootBagInfo>();
}

bool UIGS_LootBagComponent::ForceRemoveLastFilledBag() {
    return false;
}

bool UIGS_LootBagComponent::DoesBagExist() const {
    return false;
}

void UIGS_LootBagComponent::ClearPocketLootAndAddToSecuredLoot() {
}

float UIGS_LootBagComponent::BagsPercentage() const {
    return 0.0f;
}

int32 UIGS_LootBagComponent::BagsCount() const {
    return 0;
}

void UIGS_LootBagComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_LootBagComponent, m_isTransferingBag);
}


