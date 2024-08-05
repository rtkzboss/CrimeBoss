#include "IGS_TrafficManager.h"

UIGS_TrafficManager::UIGS_TrafficManager() {
}

void UIGS_TrafficManager::UnregisterTrafficPathComponent(UIGS_TrafficPathComponentFramework* inTrafficPathComponent) {
}

void UIGS_TrafficManager::RegisterTrafficPathComponent(UIGS_TrafficPathComponentFramework* inTrafficPathComponent) {
}

void UIGS_TrafficManager::RegisterSpawner(AIGS_VehicleSpawnerFramework* inSpawnPoint) {
}

void UIGS_TrafficManager::RegisterExit(AIGS_VehicleExitPointFramework* inExitPoint) {
}

void UIGS_TrafficManager::RegisterDestinationArea(AIGS_VehicleDestinationAreaFramework* DestinationArea) {
}

void UIGS_TrafficManager::RegisterDestination(AIGS_VehicleDestinationPointFramework* DestinationPoint) {
}

TArray<AIGS_VehicleDestinationPointFramework*> UIGS_TrafficManager::GetAllDestinationPointsInBoxWithTransform(const FTransform& inBoxWorldTransform, FVector InBoxExtent) {
    return TArray<AIGS_VehicleDestinationPointFramework*>();
}

TArray<AIGS_VehicleDestinationAreaFramework*> UIGS_TrafficManager::GetAllDestinationAreasInBoxWithTransform(const FTransform& inBoxWorldTransform, FVector InBoxExtent) {
    return TArray<AIGS_VehicleDestinationAreaFramework*>();
}


