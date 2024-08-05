#include "IGS_AISpawnPointManager.h"

UIGS_AISpawnPointManager::UIGS_AISpawnPointManager() {
}

TArray<AIGS_AISpawnPoint*> UIGS_AISpawnPointManager::GetAllSpawnPointsInBox(FVector inOrigin, FVector InBoxExtent) const {
    return TArray<AIGS_AISpawnPoint*>();
}

TArray<AIGS_AISpawnPoint*> UIGS_AISpawnPointManager::GetAllSpawnPoints() const {
    return TArray<AIGS_AISpawnPoint*>();
}

TArray<AIGS_AIEnemyGroupSpawner*> UIGS_AISpawnPointManager::GetAllSpawnGroupsInBox(FVector inOrigin, FVector InBoxExtent) const {
    return TArray<AIGS_AIEnemyGroupSpawner*>();
}

TArray<AIGS_AIEnemyGroupSpawner*> UIGS_AISpawnPointManager::GetAllSpawnGroups() const {
    return TArray<AIGS_AIEnemyGroupSpawner*>();
}


