#include "IGS_PlayerIntelManager.h"
#include "ComponentInstanceDataCache.h"

UIGS_PlayerIntelManager::UIGS_PlayerIntelManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_PlayerIntelManager::OnWieldableChanged(EIGS_WieldableSlot inSlotType, AIGS_WieldableBase* inWieldableBase, UIGS_WieldableInventoryObjectBase* inInventoryObject) {
}

void UIGS_PlayerIntelManager::OnCharacterKilled(AIGS_GameCharacterFramework* inInstigator, const FHitResult& inHitResult) {
}

UIGS_PlayerIntelManager* UIGS_PlayerIntelManager::GetPlayerIntelManager(UObject* inWCO) {
    return NULL;
}


