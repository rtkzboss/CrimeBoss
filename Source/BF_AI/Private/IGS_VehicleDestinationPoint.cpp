#include "IGS_VehicleDestinationPoint.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"

AIGS_VehicleDestinationPoint::AIGS_VehicleDestinationPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->bStartupOnly = false;
    this->IsActive = true;
    this->Hidden = false;
    this->VehicleGroups = 0;
    this->PossiblePath = NULL;
    this->VehicleVisual = NULL;
}

void AIGS_VehicleDestinationPoint::TriggerSpecificPassengersCarArrival(EIGS_VehicleSpawnGroup vehicleGroup, FIGS_NoSpawnPointDefinition inCustomPassengers, AIGS_VehicleBase*& outSpawnedCar) {
}

void AIGS_VehicleDestinationPoint::TriggerSpecificCarArrival(TSubclassOf<UIGS_VehicleObject> inSpecificVehicle, AIGS_VehicleBase*& outSpawnedCar, int32 minPassengers, int32 maxPassengers) {
}

void AIGS_VehicleDestinationPoint::TriggerPlacedCarArrival(AIGS_VehicleBase* Vehicle, EIGS_VehicleSplineGroup inVehicleGroup) {
}

void AIGS_VehicleDestinationPoint::TriggerExistingCarArrival(AIGS_VehicleBase* Vehicle) {
}

void AIGS_VehicleDestinationPoint::TriggerCarArrival(EIGS_VehicleSpawnGroup inVehicleGroup, AIGS_VehicleBase*& outSpawnedCar, int32 minPassengers, int32 maxPassengers) {
}

void AIGS_VehicleDestinationPoint::ShowPossibleVehicleLocationsDebug() {
}

void AIGS_VehicleDestinationPoint::CleanPossibleVehicleLocationsDebug() {
}

void AIGS_VehicleDestinationPoint::CheckRequestedCar(EIGS_VehicleSplineGroup inSplineGroup, EIGS_VehicleSpawnGroup inVehicleGroup, TSoftClassPtr<AIGS_VehicleBase> invehicleToSpawn, FIGS_NoSpawnPointDefinition inCustomPassengersDefinition, AIGS_VehicleBase*& outSpawnedCar, int32 minPassengers, int32 maxPassengers) {
}


