#include "IGS_VehicleCar.h"
#include "IGS_ObjectStatus.h"
#include "IGS_AICarSpawnComponent.h"
#include "IGS_NavModifierComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "SimpleWheeledVehicleMovementComponent.h"
#include "IGS_DestructableVehicleComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_VehicleCar::AIGS_VehicleCar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ObjectStatus = CreateDefaultSubobject<UIGS_ObjectStatus>(TEXT("ObjectStatus"));
    this->DestructableVehicleComponent = CreateDefaultSubobject<UIGS_DestructableVehicleComponent>(TEXT("DestructableVehicleComponent"));
    this->MissionLeaveAnimation = NULL;
    this->AICarSpawner = CreateDefaultSubobject<UIGS_AICarSpawnComponent>(TEXT("AICarSpawnComponent"));
    this->WheeledVehicleComponent = CreateDefaultSubobject<USimpleWheeledVehicleMovementComponent>(TEXT("WheeledVehicleComponent"));
    this->PlayerPushAwayTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerPushAwayTrigger"));
    this->PlayerPushAwayBlockingCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerPushAwayBlockingCollider"));
    this->TopTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TopTrigger"));
    this->DistanceSensorLocation = CreateDefaultSubobject<USceneComponent>(TEXT("DistanceSensorLocation"));
    this->DriveNavAreaClass = NULL;
    this->StopNavAreaClass = NULL;
    this->NavModifier = CreateDefaultSubobject<UIGS_NavModifierComponent>(TEXT("NavModifierComponent"));
    this->ParkingAniamtion = NULL;
    this->ParkingStopAniamtion = NULL;
    this->ParkTestCollisionBox = NULL;
    this->NeedsPassengers = true;
    this->bUseGravity = true;
    this->GravityDefault = 500.00f;
    this->MaxFollowSpeed = 1500.00f;
    this->AccelerateSpeed = 600.00f;
    this->StartParkingDistance = 300.00f;
    this->ParkingSpeed = 600.00f;
    this->ParkingSlowdownTime = 15.00f;
    this->RotationSpeed = 8.00f;
    this->WheelRotationSpeed = 10.00f;
    this->DriftDistance = 500.00f;
    this->DiftAngle = 13.00f;
    this->DiftSpeedDecrease = 400.00f;
    this->MaxLeashDistance = 300.00f;
    this->PushPlayerDamage = 0.00f;
    this->WheelSize = 50.00f;
    this->FrontStopTriggerOffset = -10.00f;
    this->SkidMarks = NULL;
    this->bIsFullyAccelerated = false;
    this->bDisableCar = false;
    this->bDisableWhenGrounded = false;
    this->FrontWheelAngle = 0.00f;
    this->PlayerPushAwayTrigger->SetupAttachment(RootComponent);
    this->PlayerPushAwayBlockingCollider->SetupAttachment(RootComponent);
    this->TopTrigger->SetupAttachment(RootComponent);
    this->DestructableVehicleComponent->SetupAttachment(RootComponent);
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


