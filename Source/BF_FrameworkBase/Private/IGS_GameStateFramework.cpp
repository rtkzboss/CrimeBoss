#include "IGS_GameStateFramework.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AIGS_GameStateFramework::AIGS_GameStateFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mR_PlayersImmortality = false;
    this->PocketLootValue = 0.00f;
    this->BaggedLootValue = 0.00f;
    this->LootBagCount = 0;
    this->SecuredLootBagCount = 0;
    this->m_bIsEndMission = false;
}

void AIGS_GameStateFramework::SetIsEndMission(const bool inEndMission) {
}

void AIGS_GameStateFramework::RemoveSecuredLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
}

void AIGS_GameStateFramework::RemovedPocketLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
}

void AIGS_GameStateFramework::RemoveBonusLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
}

void AIGS_GameStateFramework::RecalculateBaggedLoot() {
}

void AIGS_GameStateFramework::OnRep_SecuredLootBagCount(int32 inOldCount) {
}

void AIGS_GameStateFramework::OnRep_SecuredLoot(TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inOldSecuredLoot) {
}

void AIGS_GameStateFramework::OnRep_PocketLootValue() {
}

void AIGS_GameStateFramework::OnRep_LootBagCount(int32 inOldCount) {
}

void AIGS_GameStateFramework::OnRep_CarryablePocketLoot(TArray<TSubclassOf<UIGS_CarryableInventoryObject>> inOldSecuredLoot) {
}

void AIGS_GameStateFramework::OnRep_CarryablePickedUpLoot(TArray<TSubclassOf<UIGS_CarryableInventoryObject>> inOldSecuredLoot) {
}

void AIGS_GameStateFramework::OnRep_BonusPocketLoot(TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inOldSecuredLoot) {
}

void AIGS_GameStateFramework::OnRep_BonusLoot(TArray<TSubclassOf<UIGS_InventoryObjectFramework>> inOldSecuredLoot) {
}

void AIGS_GameStateFramework::OnRep_BaggedLootValue(float inOldValue) {
}

float AIGS_GameStateFramework::GetSecuredLootWeight() const {
    return 0.0f;
}

float AIGS_GameStateFramework::GetSecuredLootValue() {
    return 0.0f;
}

int32 AIGS_GameStateFramework::GetSecuredLootBagsCount() {
    return 0;
}

TArray<TSubclassOf<UIGS_InventoryObjectFramework>> AIGS_GameStateFramework::GetSecuredLoot() const {
    return TArray<TSubclassOf<UIGS_InventoryObjectFramework>>();
}

float AIGS_GameStateFramework::GetPocketLootWeight() const {
    return 0.0f;
}

float AIGS_GameStateFramework::GetPocketLootValue() const {
    return 0.0f;
}

TArray<TSubclassOf<UIGS_InventoryObjectFramework>> AIGS_GameStateFramework::GetPocketLoot() const {
    return TArray<TSubclassOf<UIGS_InventoryObjectFramework>>();
}

bool AIGS_GameStateFramework::GetIsEndMission() const {
    return false;
}

float AIGS_GameStateFramework::GetCarryablePocketLootWeight() const {
    return 0.0f;
}

TArray<TSubclassOf<UIGS_CarryableInventoryObject>> AIGS_GameStateFramework::GetCarryablePocketLoot() const {
    return TArray<TSubclassOf<UIGS_CarryableInventoryObject>>();
}

float AIGS_GameStateFramework::GetCarryablePickedUpLootWeight() const {
    return 0.0f;
}

TArray<TSubclassOf<UIGS_CarryableInventoryObject>> AIGS_GameStateFramework::GetCarryablePickedUpLoot() const {
    return TArray<TSubclassOf<UIGS_CarryableInventoryObject>>();
}

TArray<TSubclassOf<UIGS_InventoryObjectFramework>> AIGS_GameStateFramework::GetBonusPocketLoot() const {
    return TArray<TSubclassOf<UIGS_InventoryObjectFramework>>();
}

TArray<TSubclassOf<UIGS_InventoryObjectFramework>> AIGS_GameStateFramework::GetBonusLoot() const {
    return TArray<TSubclassOf<UIGS_InventoryObjectFramework>>();
}

float AIGS_GameStateFramework::GetAllLootCollectedValue() {
    return 0.0f;
}

void AIGS_GameStateFramework::CountPocketLootAsSecuredLoot(UObject* inWCO) {
}

bool AIGS_GameStateFramework::ArePlayersImmortal() {
    return false;
}

void AIGS_GameStateFramework::AddSecuredLootBag(UObject* inWCO) {
}

void AIGS_GameStateFramework::AddSecuredLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass, AIGS_GameCharacterFramework* OwningPawn) {
}

void AIGS_GameStateFramework::AddPocketLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
}

void AIGS_GameStateFramework::AddLootBag(UObject* inWCO) {
}

void AIGS_GameStateFramework::AddCarryablePocketLoot(UObject* inWCO, TSubclassOf<UIGS_CarryableInventoryObject> inItemClass) {
}

void AIGS_GameStateFramework::AddCarryablePickedUpLoot(UObject* inWCO, TSubclassOf<UIGS_CarryableInventoryObject> inItemClass) {
}

void AIGS_GameStateFramework::AddBonusPocketLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass) {
}

void AIGS_GameStateFramework::AddBonusLoot(UObject* inWCO, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass, AIGS_GameCharacterFramework* OwningPawn) {
}

void AIGS_GameStateFramework::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_GameStateFramework, mR_PlayersImmortality);
    DOREPLIFETIME(AIGS_GameStateFramework, PocketLootValue);
    DOREPLIFETIME(AIGS_GameStateFramework, BaggedLootValue);
    DOREPLIFETIME(AIGS_GameStateFramework, PocketLoot);
    DOREPLIFETIME(AIGS_GameStateFramework, BonusPocketLoot);
    DOREPLIFETIME(AIGS_GameStateFramework, CarryablePocketLoot);
    DOREPLIFETIME(AIGS_GameStateFramework, CarryablePickedUpLoot);
    DOREPLIFETIME(AIGS_GameStateFramework, SecuredLoot);
    DOREPLIFETIME(AIGS_GameStateFramework, BonusLoot);
    DOREPLIFETIME(AIGS_GameStateFramework, LootBagCount);
    DOREPLIFETIME(AIGS_GameStateFramework, SecuredLootBagCount);
}


