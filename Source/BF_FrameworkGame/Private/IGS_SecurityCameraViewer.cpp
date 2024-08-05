#include "IGS_SecurityCameraViewer.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

AIGS_SecurityCameraViewer::AIGS_SecurityCameraViewer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TemporaryDisableDuration = 2.000000000e+01f;
    (*this).mR_AllowDisablingCameras = true;
    (*this).bSetListenerOnPossessed = true;
}

void AIGS_SecurityCameraViewer::UseCameraViewer(AIGS_GameCharacterFramework* inInstigator) {
}




void AIGS_SecurityCameraViewer::SetCanSwitchCameras(bool InValue) {
}

void AIGS_SecurityCameraViewer::SetCameraSources(TArray<AIGS_SecurityCamera*> inCameras) {
}

void AIGS_SecurityCameraViewer::Server_TurnCamera_Implementation(float inAxisValue) const {
}

void AIGS_SecurityCameraViewer::Server_LookUpCamera_Implementation(float inAxisValue) const {
}

void AIGS_SecurityCameraViewer::Server_FreezeCamera_Implementation() {
}

void AIGS_SecurityCameraViewer::Server_ExitCameraControl_Implementation() {
}

void AIGS_SecurityCameraViewer::Server_DisableAllCameras_Implementation() {
}

void AIGS_SecurityCameraViewer::Server_ChangeCamera_Implementation(bool inNextCamera) {
}

void AIGS_SecurityCameraViewer::OnRep_PossedPawn(AIGS_DetectorBase* inPreviousPossedPawn) {
}

void AIGS_SecurityCameraViewer::OnRep_AllowDisablingCameras() {
}

void AIGS_SecurityCameraViewer::OnRep_AllCamerasDisabled() {
}


void AIGS_SecurityCameraViewer::OnClientInteractiveUsed(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_SecurityCameraViewer::OnCameraDestroyed(AIGS_DetectorBase* inDetector) {
}

bool AIGS_SecurityCameraViewer::IsAnyValidCamera() {
    return false;
}

bool AIGS_SecurityCameraViewer::IsActiveCameraDisabled() const {
    return false;
}


AIGS_GameCharacterFramework* AIGS_SecurityCameraViewer::GetUser() {
    return NULL;
}

int32 AIGS_SecurityCameraViewer::GetSourcesCount() const {
    return 0;
}

int32 AIGS_SecurityCameraViewer::GetActiveCameraIndex() const {
    return 0;
}

AIGS_SecurityCamera* AIGS_SecurityCameraViewer::GetActiveCamera() const {
    return NULL;
}

void AIGS_SecurityCameraViewer::DisableAllCameras() {
}

void AIGS_SecurityCameraViewer::Client_OnActiveCameraChanged_Implementation(AIGS_SecurityCamera* inCamera, int32 inActiveCameraID, bool inIsDisabled) {
}

void AIGS_SecurityCameraViewer::Client_ExitCameraControl_Implementation(int32 inActiveCameraID) {
}

void AIGS_SecurityCameraViewer::Client_EnterCameraControl_Implementation(int32 inActiveCameraID, int32 inCameraSourcesCount) {
}

void AIGS_SecurityCameraViewer::AllowDisablingCameras(bool InValue) {
}

void AIGS_SecurityCameraViewer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_SecurityCameraViewer, mR_AllCamerasDisabled);
    DOREPLIFETIME(AIGS_SecurityCameraViewer, mR_AllowDisablingCameras);
    DOREPLIFETIME(AIGS_SecurityCameraViewer, PossedPawn);
}


