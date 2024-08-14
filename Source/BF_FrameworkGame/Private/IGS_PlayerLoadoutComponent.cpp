#include "IGS_PlayerLoadoutComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_PlayerLoadoutComponent::UIGS_PlayerLoadoutComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_PlayerLoadoutComponent::Server_OverrideAbility1Charges_Implementation(const int32 inCharges) {
}
bool UIGS_PlayerLoadoutComponent::Server_OverrideAbility1Charges_Validate(const int32 inCharges) {
    return true;
}

void UIGS_PlayerLoadoutComponent::Server_GivePerks_Implementation(const TArray<FMETA_PerkDataToFPS>& inPerkIDs) {
}
bool UIGS_PlayerLoadoutComponent::Server_GivePerks_Validate(const TArray<FMETA_PerkDataToFPS>& inPerkIDs) {
    return true;
}

void UIGS_PlayerLoadoutComponent::Server_GiveMPPerks_Implementation(const TArray<FMETA_PerkDataToFPS>& inPerkIDs) {
}
bool UIGS_PlayerLoadoutComponent::Server_GiveMPPerks_Validate(const TArray<FMETA_PerkDataToFPS>& inPerkIDs) {
    return true;
}

void UIGS_PlayerLoadoutComponent::Selfrevive() {
}

void UIGS_PlayerLoadoutComponent::OnEnemyKilled(AIGS_GameCharacterFramework* inInstigator, const FHitResult& inHitResult) {
}

void UIGS_PlayerLoadoutComponent::InitializeLoadout() {
}

void UIGS_PlayerLoadoutComponent::HandlePlayerDownState() {
}

UIGS_EquipmentInventoryObject* UIGS_PlayerLoadoutComponent::GetCurrentEquipmentObject() {
    return NULL;
}

void UIGS_PlayerLoadoutComponent::ForceDownstateUseAbility() {
}

void UIGS_PlayerLoadoutComponent::Client_SetEquipmentData_Implementation(float inTimestamp, int32 inCount, int32 inKillCount) {
}


