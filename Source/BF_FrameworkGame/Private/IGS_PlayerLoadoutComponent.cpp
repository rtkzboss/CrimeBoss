#include "IGS_PlayerLoadoutComponent.h"

UIGS_PlayerLoadoutComponent::UIGS_PlayerLoadoutComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SubtractChargeGE = NULL;
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

void UIGS_PlayerLoadoutComponent::InitializeLoadout() {
}

UIGS_EquipmentInventoryObject* UIGS_PlayerLoadoutComponent::GetCurrentEquipmentObject() {
    return NULL;
}

void UIGS_PlayerLoadoutComponent::Client_SetEquipmentData_Implementation(float inTimestamp, int32 inCount) {
}


