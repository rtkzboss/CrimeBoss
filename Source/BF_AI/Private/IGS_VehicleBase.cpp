#include "IGS_VehicleBase.h"
#include "AkComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "IGS_VehiclePathFollowerComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_VehicleBase::AIGS_VehicleBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).PassengersGetOutAfterDriveFinished = true;
    (*this).Speed.Min = 1.500000000e+03f;
    (*this).Speed.Max = 2.000000000e+03f;
    (*this).bStartIdleOnBeginPlay = true;
    (*this).AkAudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComponent"));
    (*this).VehicleMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VehicleSkeletalMesh"));
    (*this).FollowerComponent = CreateDefaultSubobject<UIGS_VehiclePathFollowerComponent>(TEXT("FollowComponent"));
    (*this).bCanSpawnPassengers = true;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).RootComponent = (USceneComponent*)VehicleMesh;
    (*this).AkAudioComponent->SetupAttachment((*this).RootComponent);
}

void AIGS_VehicleBase::UpdateEscapeInteractions(bool inIsObjectiveCompleted, float inHoldTime) {
}

void AIGS_VehicleBase::StartEscapeSequence() {
}

void AIGS_VehicleBase::StartDrive(TArray<UIGS_TrafficPathComponent*> InPath) {
}

void AIGS_VehicleBase::SetPassengerCount(int32 Min, int32 Max) {
}

void AIGS_VehicleBase::SetCustomPassengersDefinition(const FIGS_NoSpawnPointDefinition& inCustomPassengersDefinition, bool bInForceFilled) {
}

void AIGS_VehicleBase::SetCanBeAutoPinged(const bool InValue) {
}

void AIGS_VehicleBase::Server_SetColor_Implementation(FColor InColor) {
}

void AIGS_VehicleBase::Server_FinishDrive_Implementation() {
}

void AIGS_VehicleBase::RegisterEndMissionInteractions(TArray<UIGS_InteractiveComponent*> inInteractiveComponents) {
}

void AIGS_VehicleBase::PlayerHealthStateChanged(EIGS_HealthState inState) {
}

void AIGS_VehicleBase::OnSegmentFinished(UPFPathFollowerComponent* inFollower) {
}

void AIGS_VehicleBase::OnRep_Color() const {
}

void AIGS_VehicleBase::OnDriveStarted_Implementation() {
}

void AIGS_VehicleBase::OnDriveFinished_Implementation() {
}

void AIGS_VehicleBase::OnCharactersSpawned(const TArray<AIGS_GameCharacterFramework*>& inCharacters) {
}


void AIGS_VehicleBase::Multi_SetAudio_Implementation(UAkAudioEvent* inNewAudio) {
}

void AIGS_VehicleBase::Leave() {
}

void AIGS_VehicleBase::GoToDestination(AIGS_VehicleDestinationPoint* inDestinationPoint, bool& outPathFound) {
}

EIGS_VehicleSpawnGroup AIGS_VehicleBase::GetVehicleSpawnGroup() const {
    return EIGS_VehicleSpawnGroup::None;
}

FVector AIGS_VehicleBase::GetLocationAtDistanceAlongSpline(float inDistance) const {
    return FVector{};
}

bool AIGS_VehicleBase::GetIsDriving() {
    return false;
}

void AIGS_VehicleBase::EvaluatePingStatus() {
}

void AIGS_VehicleBase::Despawn() {
}

void AIGS_VehicleBase::BindHeistersHealthState() {
}

void AIGS_VehicleBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_VehicleBase, isEscaping);
    DOREPLIFETIME(AIGS_VehicleBase, mR_Color);
    DOREPLIFETIME(AIGS_VehicleBase, bIsDriving);
}


