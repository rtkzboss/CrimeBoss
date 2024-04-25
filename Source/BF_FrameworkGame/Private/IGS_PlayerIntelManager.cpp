#include "IGS_PlayerIntelManager.h"

UIGS_PlayerIntelManager::UIGS_PlayerIntelManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CurrentLocalPawn = NULL;
    this->PlayerWeaponSuccessfulHits = 0;
    this->PlayerWeaponMissedHits = 0;
    this->KillCount = 0;
    this->CiviliansKillCount = 0;
    this->SecurityKilled = 0;
    this->PolicedKilled = 0;
    this->SwatsKilled = 0;
    this->GangstersKilled = 0;
    this->MoneyInInventory = 0.00f;
}

void UIGS_PlayerIntelManager::OnWieldableChanged(EIGS_WieldableSlot inSlotType, AIGS_WieldableBase* inWieldableBase, UIGS_WieldableInventoryObjectBase* inInventoryObject) {
}

void UIGS_PlayerIntelManager::OnCharacterKilled(AIGS_GameCharacterFramework* inInstigator, const FHitResult& inHitResult) {
}

UIGS_PlayerIntelManager* UIGS_PlayerIntelManager::GetPlayerIntelManager(UObject* inWCO) {
    return NULL;
}


