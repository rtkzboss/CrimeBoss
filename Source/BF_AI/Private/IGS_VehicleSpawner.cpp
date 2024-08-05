#include "IGS_VehicleSpawner.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"

AIGS_VehicleSpawner::AIGS_VehicleSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ForceVehicleSpawn = nullptr;
    (*this).MaxSpawnsCount = -1;
    (*this).bEnabled = true;
    (*this).RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

AIGS_VehicleBase* AIGS_VehicleSpawner::SpawnVehicleOnPath(TSoftClassPtr<AIGS_VehicleBase> invehicleToSpawn, TArray<UIGS_TrafficPathComponent*> InPath) {
    return NULL;
}

TArray<AIGS_VehicleBase*> AIGS_VehicleSpawner::SpawnSpecific(TSubclassOf<UIGS_VehicleObject> inSpecificVehicle, int32 inVehicleCount, int32 minPassengers, int32 maxPassengers) {
    return TArray<AIGS_VehicleBase*>();
}

TArray<AIGS_VehicleBase*> AIGS_VehicleSpawner::Spawn(EIGS_VehicleSpawnGroup inVehicleGroup, int32 inVehicleCount, int32 minPassengers, int32 maxPassengers) {
    return TArray<AIGS_VehicleBase*>();
}

TArray<AIGS_VehicleBase*> AIGS_VehicleSpawner::GetSpawnedVehicles() const {
    return TArray<AIGS_VehicleBase*>();
}

void AIGS_VehicleSpawner::Enable() {
}

void AIGS_VehicleSpawner::Disable() {
}



