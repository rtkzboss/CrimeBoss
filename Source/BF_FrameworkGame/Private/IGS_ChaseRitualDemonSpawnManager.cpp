#include "IGS_ChaseRitualDemonSpawnManager.h"
#include "Components/BillboardComponent.h"

AIGS_ChaseRitualDemonSpawnManager::AIGS_ChaseRitualDemonSpawnManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UnitSpecialization = EIGS_UnitSpecialization::US_None;
    this->DemonSpawnPoint = NULL;
    this->SpawnPointClass = NULL;
    this->TriggerTolarance = 1.00f;
    this->SpawnDemonInterval = 0.50f;
    this->PlayerInputCheckInterval = 0.50f;
    this->ChanceToSpawn = 100.00f;
    this->SpawnDistance = 1000.00f;
    this->TimeToVanish = 15.00f;
    this->MaxAllowedSpawnedDemons = 1;
    this->SpawnedDemons = 0;
    this->SpawnQueryTemplate = NULL;
    this->CorrectRunesForActivation = 0;
    this->RunesActivated = 0;
    this->CorrectRunesActivated = 0;
    this->m_SpawningAlreadyStarted = false;
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->PlayerCharacter = NULL;
}

void AIGS_ChaseRitualDemonSpawnManager::TryToSpawnDemon() {
}

void AIGS_ChaseRitualDemonSpawnManager::StartLogic() {
}

void AIGS_ChaseRitualDemonSpawnManager::ResetPlayerInputDetection() {
}

void AIGS_ChaseRitualDemonSpawnManager::OnSquadSpawnedEvent(TArray<AIGS_GameCharacterFramework*> inSquadMembers) {
}

void AIGS_ChaseRitualDemonSpawnManager::DemonVanished() {
}





void AIGS_ChaseRitualDemonSpawnManager::DemonDied() {
}


