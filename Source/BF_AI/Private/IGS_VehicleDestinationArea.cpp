#include "IGS_VehicleDestinationArea.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_VehicleDestinationArea::AIGS_VehicleDestinationArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MaxSpawnsCount = -1;
    (*this).Cooldown.Min = 1.000000000e+00f;
    (*this).Cooldown.Max = 2.000000000e+00f;
    (*this).AllowTrespassers = true;
    (*this).GroupRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("GroupRootComponent"));
    (*this).AreaDefinition = CreateDefaultSubobject<UBoxComponent>(TEXT("AreaDefinition"));
    (*this).IsActive = true;
    (*this).RootComponent = (USceneComponent*)GroupRootComponent;
    (*this).AreaDefinition->SetupAttachment((*this).GroupRootComponent);
}

TArray<AIGS_VehicleBase*> AIGS_VehicleDestinationArea::TriggerSpecificPassengersCarArrival(EIGS_VehicleSpawnGroup vehicleGroup, FIGS_NoSpawnPointDefinition inCustomPassengers, int32 vehicleCount) {
    return TArray<AIGS_VehicleBase*>();
}

TArray<AIGS_VehicleBase*> AIGS_VehicleDestinationArea::TriggerCarArrivalBase(EIGS_VehicleSpawnGroup inVehicleGroup, FIGS_NoSpawnPointDefinition inCustomPassengers, int32 vehicleCount, int32 minPassengers, int32 maxPassengers) {
    return TArray<AIGS_VehicleBase*>();
}

TArray<AIGS_VehicleBase*> AIGS_VehicleDestinationArea::TriggerCarArrival(EIGS_VehicleSpawnGroup vehicleGroup, int32 vehicleCount, int32 minPassengers, int32 maxPassengers) {
    return TArray<AIGS_VehicleBase*>();
}

void AIGS_VehicleDestinationArea::OnShowParkingAreasChanged(bool inOn) {
}


