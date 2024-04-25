#include "IGS_VehicleDestinationArea.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AIGS_VehicleDestinationArea::AIGS_VehicleDestinationArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("GroupRootComponent"));
    this->Hidden = false;
    this->VehicleVisual = NULL;
    this->VehicleGroups = 0;
    this->MaxSpawnsCount = -1;
    this->AllowTrespassers = true;
    this->ParkingSegmentTemplate = NULL;
    this->GroupRootComponent = (USceneComponent*)RootComponent;
    this->AreaDefinition = CreateDefaultSubobject<UBoxComponent>(TEXT("AreaDefinition"));
    this->IsActive = true;
    this->AreaDefinition->SetupAttachment(RootComponent);
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


