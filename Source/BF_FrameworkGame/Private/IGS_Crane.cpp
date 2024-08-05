#include "IGS_Crane.h"
#include "AkComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_Crane::AIGS_Crane(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).RootObject = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).AkAudioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent"));
    (*this).CableMeshHeight = 1.000000000e+02f;
    (*this).MoveSpeed = 2.000000000e+02f;
    (*this).LiftSpeed = 6.000000000e+02f;
    (*this).RotationSpeed = 5.000000000e+00f;
    (*this).mR_CableInstancesCount = 1;
    (*this).RootComponent = (USceneComponent*)RootObject;
    (*this).AkAudioComponent->SetupAttachment((*this).RootObject);
}

void AIGS_Crane::UseCrane(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_Crane::Server_ToogleMagnetState_Implementation() {
}

void AIGS_Crane::Server_SetMagnetState_Implementation(bool inState) {
}

void AIGS_Crane::Server_RotateCrane_Implementation(float inAxisValue) {
}

void AIGS_Crane::Server_MoveMagnet_Implementation(float inAxisValue) {
}

void AIGS_Crane::Server_LiftMagnet_Implementation(float inAxisValue) {
}

void AIGS_Crane::Server_ExitCraneControl_Implementation() {
}

void AIGS_Crane::OnRep_MagnetHeadLocationChanged() const {
}

void AIGS_Crane::OnRep_MagnetComponentLocationChanged() const {
}

void AIGS_Crane::OnRep_CraneTopModuleRotationChanged() const {
}

void AIGS_Crane::OnRep_CableInstancesCountChanged() const {
}


void AIGS_Crane::OnMagnetBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}

void AIGS_Crane::OnCraneObjectsDetectorEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

void AIGS_Crane::OnCraneObjectsDetectorBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}





void AIGS_Crane::Client_SetObjectOutlineState_Implementation(AActor* inOutlineObject, EIGS_CameraOutlineState inState) {
}

void AIGS_Crane::Client_OnCraneObjectPickStatusChanged_Implementation(UIGS_CraneObjectComponent* inCraneObject, bool inState) {
}

void AIGS_Crane::Client_OnCraneObjectDetectionStatusChanged_Implementation(UIGS_CraneObjectComponent* inCraneObject, bool inState) {
}

void AIGS_Crane::Client_ExitCraneControl_Implementation() {
}

void AIGS_Crane::Client_EnterCraneControl_Implementation() {
}

void AIGS_Crane::All_RotateCraneStop_Implementation() {
}

void AIGS_Crane::All_RotateCraneStart_Implementation() {
}

void AIGS_Crane::All_OnMagnetStateChanged_Implementation(bool inState) {
}

void AIGS_Crane::All_MoveMagnetStop_Implementation() {
}

void AIGS_Crane::All_MoveMagnetStart_Implementation() {
}

void AIGS_Crane::All_LiftMagnetStop_Implementation() {
}

void AIGS_Crane::All_LiftMagnetStart_Implementation() {
}

void AIGS_Crane::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_Crane, mR_CraneTopModuleRotator);
    DOREPLIFETIME(AIGS_Crane, mR_MagnetComponentLocation);
    DOREPLIFETIME(AIGS_Crane, mR_MagnetHeadLocation);
    DOREPLIFETIME(AIGS_Crane, mR_CableInstancesCount);
}


