#include "IGS_RideableCar_Base.h"
#include "Components/BoxComponent.h"
#include "WheeledVehicleMovementComponent4W.h"
#include "Net/UnrealNetwork.h"

AIGS_RideableCar_Base::AIGS_RideableCar_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SuspensionLength = 252;
    this->WheelRadius = 50.00f;
    this->BrakeForceMultiplier = 0.02f;
    this->CollisionSoundMultiplier = 1.40f;
    this->CollisionTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Trigger"));
    this->VehicleMovement = CreateDefaultSubobject<UWheeledVehicleMovementComponent4W>(TEXT("Wheeled Vehicle Movement"));
    this->ExitSpeedLimit = 10.00f;
    this->Steering = 0.00f;
    this->m_SteeringTarget = 0.00f;
    this->CollisionTrigger->SetupAttachment(RootComponent);
}

void AIGS_RideableCar_Base::SyncSteering_SERVER_Implementation(float InValue) {
}

void AIGS_RideableCar_Base::SyncSteering() {
}

void AIGS_RideableCar_Base::StartSmoothStop_Implementation() {
}

void AIGS_RideableCar_Base::SetDriverCameraRotState_SERVER_Implementation(bool inIsLookingAtRight) {
}

void AIGS_RideableCar_Base::SendMove_SERVER_Implementation(FRideableCarMove Move) {
}

void AIGS_RideableCar_Base::OnRep_ServerMoveState() {
}

void AIGS_RideableCar_Base::OnHitVehicle(UPrimitiveComponent* inHitComp, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, FVector inNormalImpulse, const FHitResult& inHit) {
}


void AIGS_RideableCar_Base::OnEntryTriggerBeginOverlap_Implementation(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}

void AIGS_RideableCar_Base::OnCollisionTriggerEndOverlap_Implementation(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

bool AIGS_RideableCar_Base::IsGrounded() {
    return false;
}

void AIGS_RideableCar_Base::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_RideableCar_Base, ServerState);
    DOREPLIFETIME(AIGS_RideableCar_Base, m_SteeringTarget);
}


