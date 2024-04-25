#include "IGS_TrafficPathfinding.h"

UIGS_TrafficPathfinding::UIGS_TrafficPathfinding() {
}

void UIGS_TrafficPathfinding::OnPopulationFinished() {
}

void UIGS_TrafficPathfinding::GetClosestDestinationPointOrArea(const UObject* inWCO, FVector InPosition, EIGS_VehicleSplineGroup inVehicleGroup, bool inStartup, AActor*& outDestination) {
}

void UIGS_TrafficPathfinding::GetClosestDestinationPoint(const UObject* inWCO, FVector InPosition, EIGS_VehicleSplineGroup inVehicleGroup, bool inStartup, AIGS_VehicleDestinationPoint*& outDestinationPoint) {
}

void UIGS_TrafficPathfinding::GetClosestDestinationArea(const UObject* inWCO, FVector InPosition, EIGS_VehicleSplineGroup inVehicleGroup, bool inStartup, AIGS_VehicleDestinationArea*& outDestinationArea) {
}

void UIGS_TrafficPathfinding::ForceSetVehicleGroup(UObject* inDestination, int32 InValue) {
}

TArray<AIGS_VehicleBase*> UIGS_TrafficPathfinding::CallCarsWithPassengersToPosition(const UObject* inWCO, FIGS_NoSpawnPointDefinition inCustomPassengers, FVector InPosition, EIGS_VehicleSpawnGroup inVehicleGroup, int32 inAmount, float MaxDistance) {
    return TArray<AIGS_VehicleBase*>();
}

TArray<AIGS_VehicleBase*> UIGS_TrafficPathfinding::CallCarsToPosition(const UObject* inWCO, FVector InPosition, EIGS_VehicleSpawnGroup inVehicleGroup, int32 inAmount, int32 inMinPassengers, int32 inMaxPassengers) {
    return TArray<AIGS_VehicleBase*>();
}


