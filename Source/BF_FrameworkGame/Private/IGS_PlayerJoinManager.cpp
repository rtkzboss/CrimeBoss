#include "IGS_PlayerJoinManager.h"
#include "Net/UnrealNetwork.h"

UIGS_PlayerJoinManager::UIGS_PlayerJoinManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HasEveryoneLoadedLevel = false;
    this->m_OldPlayer = NULL;
    this->m_OldBot = NULL;
}

void UIGS_PlayerJoinManager::OnRep_JoinedPlayers() const {
}

void UIGS_PlayerJoinManager::OnRep_HasEveryoneLoadedLevel() {
}

FIGS_PlayerJoinInfo UIGS_PlayerJoinManager::GetSlotByHeisterNumberBP(int32 inHeisterNumber) {
    return FIGS_PlayerJoinInfo{};
}

UIGS_PlayerJoinManager* UIGS_PlayerJoinManager::GetPlayerJoinManager(UObject* inWCO) {
    return NULL;
}

int32 UIGS_PlayerJoinManager::GetNumberOfFreeSlots() const {
    return 0;
}

int32 UIGS_PlayerJoinManager::GetJoinedHeistersCount() {
    return 0;
}


TArray<AIGS_GameCharacterFramework*> UIGS_PlayerJoinManager::GetCurrentPlayers() {
    return TArray<AIGS_GameCharacterFramework*>();
}

void UIGS_PlayerJoinManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_PlayerJoinManager, R_JoinedPlayers);
    DOREPLIFETIME(UIGS_PlayerJoinManager, HasEveryoneLoadedLevel);
}


