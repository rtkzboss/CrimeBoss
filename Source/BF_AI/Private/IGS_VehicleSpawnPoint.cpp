#include "IGS_VehicleSpawnPoint.h"
#include "Components/SceneComponent.h"

AIGS_VehicleSpawnPoint::AIGS_VehicleSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bDoNotGenerate = false;
    this->SpawnPoint = NULL;
    this->VehicleGroups = 0;
    this->ChanceToGenerate = 100.00f;
    this->bSpawnOnBeginPlay = true;
    this->PreviewVehicle = NULL;
    this->SpawnedVehicle = NULL;
}

void AIGS_VehicleSpawnPoint::Server_Spawn() {
}

void AIGS_VehicleSpawnPoint::Server_RemoveVehicle() const {
}

void AIGS_VehicleSpawnPoint::OnDebugSubsystemUpdated() {
}


