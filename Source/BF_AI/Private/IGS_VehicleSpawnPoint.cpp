#include "IGS_VehicleSpawnPoint.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_VehicleSpawnPoint::AIGS_VehicleSpawnPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ChanceToGenerate = 1.000000000e+02f;
    (*this).bSpawnOnBeginPlay = true;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

void AIGS_VehicleSpawnPoint::Server_Spawn() {
}

void AIGS_VehicleSpawnPoint::Server_RemoveVehicle() const {
}

void AIGS_VehicleSpawnPoint::OnDebugSubsystemUpdated() {
}


