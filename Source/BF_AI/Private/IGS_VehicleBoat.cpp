#include "IGS_VehicleBoat.h"
#include "IGS_AIBoatSpawnComponent.h"
#include "Components/ChildActorComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "BuoyancyComponent.h"
#include "EIGS_VehicleSplineGroup.h"
#include "Net/UnrealNetwork.h"

AIGS_VehicleBoat::AIGS_VehicleBoat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Buoyancy = CreateDefaultSubobject<UBuoyancyComponent>(TEXT("Buoyancy"));
    (*this).PlayerResetTrigger = CreateDefaultSubobject<UChildActorComponent>(TEXT("PlayerResetTrigger"));
    (*this).AIBoatSpawnerComponent = CreateDefaultSubobject<UIGS_AIBoatSpawnComponent>(TEXT("AIBoatSpawnerComponent"));
    (*this).bPassengersGetOutAfterDriveFinished = true;
    (*this).TimeToStop = 5.000000000e+00f;
    (*this).followDistance = 1.000000000e+03f;
    (*this).rotationSlowFactor = 1.000000000e+02f;
    (*this).waveSlowFactor = 1.200000000e+02f;
    (*this).RotationSpeed = 1.000000000e+01f;
    (*this).EscapeDriveSpeed = 1.000000000e+03f;
    (*this).BuoyancyAmplitude = 1.000000000e+01f;
    (*this).BoatForwardMultiplier = 1.499999966e-02f;
    (*this).WaveMaxAmplitude1 = 9.999999776e-03f;
    (*this).WaveMaxAmplitude2 = 2.500000037e-02f;
    (*this).bUseGravity = true;
}

void AIGS_VehicleBoat::StartDrive_BP(TArray<UIGS_TrafficPathComponent*> InPath) {
}

void AIGS_VehicleBoat::SetSocketMesh(UStaticMeshComponent* InMesh, FName inSocket) const {
}

void AIGS_VehicleBoat::SetCustomDestination_Implementation(FVector InLocation, FRotator InRotation) {
}

void AIGS_VehicleBoat::ParkBoat() {
}

void AIGS_VehicleBoat::GetBuoyancyWaterStatus(int32 Index, bool& outInWater) {
}

void AIGS_VehicleBoat::GetBuoyancyData(FBuoyancyData& outBuoyancyData) {
}

void AIGS_VehicleBoat::ChangeBoatSpeed(float newSpeed) {
}

void AIGS_VehicleBoat::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_VehicleBoat, mR_TargetPosition);
    DOREPLIFETIME(AIGS_VehicleBoat, mR_TargetRotation);
    DOREPLIFETIME(AIGS_VehicleBoat, mR_NewTargetParkingLocation);
    DOREPLIFETIME(AIGS_VehicleBoat, mR_bDrivingOnServer);
    DOREPLIFETIME(AIGS_VehicleBoat, mR_bArrivedAtDestination);
    DOREPLIFETIME(AIGS_VehicleBoat, mR_ParkPosition);
    DOREPLIFETIME(AIGS_VehicleBoat, mR_ParkRotation);
}


