#include "IGS_VehicleCar.h"
#include "IGS_ObjectStatus.h"
#include "IGS_AICarSpawnComponent.h"
#include "IGS_NavModifierComponent.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "SimpleWheeledVehicleMovementComponent.h"
#include "EIGS_VehicleSplineGroup.h"
#include "IGS_DestructableVehicleComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_VehicleCar::AIGS_VehicleCar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ObjectStatus = CreateDefaultSubobject<UIGS_ObjectStatus>(TEXT("ObjectStatus"));
    (*this).DestructableVehicleComponent = CreateDefaultSubobject<UIGS_DestructableVehicleComponent>(TEXT("DestructableVehicleComponent"));
    (*this).AICarSpawner = CreateDefaultSubobject<UIGS_AICarSpawnComponent>(TEXT("AICarSpawnComponent"));
    (*this).WheeledVehicleComponent = CreateDefaultSubobject<USimpleWheeledVehicleMovementComponent>(TEXT("WheeledVehicleComponent"));
    (*this).PlayerPushAwayTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerPushAwayTrigger"));
    (*this).PlayerPushAwayBlockingCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerPushAwayBlockingCollider"));
    (*this).TopTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TopTrigger"));
    (*this).DistanceSensorLocation = CreateDefaultSubobject<USceneComponent>(TEXT("DistanceSensorLocation"));
    (*this).NavModifier = CreateDefaultSubobject<UIGS_NavModifierComponent>(TEXT("NavModifierComponent"));
    (*this).NeedsPassengers = true;
    (*this).bUseGravity = true;
    (*this).GravityDefault = 5.000000000e+02f;
    (*this).MaxFollowSpeed = 1.500000000e+03f;
    (*this).AccelerateSpeed = 6.000000000e+02f;
    (*this).StartParkingDistance = 3.000000000e+02f;
    (*this).ParkingSpeed = 6.000000000e+02f;
    (*this).ParkingSlowdownTime = 1.500000000e+01f;
    (*this).RotationSpeed = 8.000000000e+00f;
    (*this).WheelRotationSpeed = 1.000000000e+01f;
    (*this).DriftDistance = 5.000000000e+02f;
    (*this).DiftAngle = 1.300000000e+01f;
    (*this).DiftSpeedDecrease = 4.000000000e+02f;
    (*this).MaxLeashDistance = 3.000000000e+02f;
    (*this).WheelSize = 5.000000000e+01f;
    (*this).FrontStopTriggerOffset = -1.000000000e+01f;
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).DestructableVehicleComponent->SetupAttachment((*this).RootComponent);
    (*this).PlayerPushAwayTrigger->SetupAttachment((*this).RootComponent);
    (*this).PlayerPushAwayBlockingCollider->SetupAttachment((*this).RootComponent);
    (*this).TopTrigger->SetupAttachment((*this).RootComponent);
}

void AIGS_VehicleCar::SpawnPassengers() {
}

void AIGS_VehicleCar::SetupWheels(TArray<UIGS_DrivableTireComponent*> inAllWheels) {
}

void AIGS_VehicleCar::SetupAsStaticVehicle() {
}

void AIGS_VehicleCar::SetSocketMesh(UStaticMeshComponent* InMesh, FName inSocket) const {
}

void AIGS_VehicleCar::PushPlayersOfVehicle() {
}

void AIGS_VehicleCar::PushPlayerAway(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}

void AIGS_VehicleCar::PlayDoorAnimation(int32 inPassengerID) {
}

void AIGS_VehicleCar::OnRep_OpenedDoors(TArray<int32> inPreviousOpenedDoors) {
}

void AIGS_VehicleCar::OnRep_DisableCar(bool bPreviousDisable) {
}

void AIGS_VehicleCar::OnPassengerGettingOut(int32 inPassengerID) {
}

void AIGS_VehicleCar::Multi_EndDrive_Implementation() {
}

void AIGS_VehicleCar::EnableMeshTick() const {
}

void AIGS_VehicleCar::DelayDisableCar() {
}

void AIGS_VehicleCar::CheckParkingLocation() {
}

void AIGS_VehicleCar::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_VehicleCar, mR_OpenedDoors);
    DOREPLIFETIME(AIGS_VehicleCar, bUseGravity);
    DOREPLIFETIME(AIGS_VehicleCar, bDisableCar);
    DOREPLIFETIME(AIGS_VehicleCar, mR_NewVelocity);
    DOREPLIFETIME(AIGS_VehicleCar, mR_GravityForce);
    DOREPLIFETIME(AIGS_VehicleCar, mR_FinalRotation);
    DOREPLIFETIME(AIGS_VehicleCar, mR_FinalWheelRotation);
}


