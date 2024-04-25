#include "IGS_PingableComponent.h"
#include "Net/UnrealNetwork.h"

UIGS_PingableComponent::UIGS_PingableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseRootForOutline = true;
    this->bShowOutline = true;
    this->PingDuration = -1.00f;
    this->PingableType = EIGS_PingableType::Generic;
    this->mR_bCanBePinged = true;
    this->PingedAkAudioEventLoaded = NULL;
    this->PingedDangerousAkAudioEventLoaded = NULL;
    this->mR_bIsPinged = false;
    this->m_OutlineComponent = NULL;
}

void UIGS_PingableComponent::SetOutlineState(EIGS_CameraOutlineState inType, bool inEnabled) {
}

void UIGS_PingableComponent::PingIndefinitely(const UObject* inPingedBy) {
}

void UIGS_PingableComponent::PingCustomDuration(float inDuration, const UObject* inPingedBy) {
}

void UIGS_PingableComponent::Ping(const UObject* inPingedBy) {
}

void UIGS_PingableComponent::OnRep_IsPingedChange() {
}

void UIGS_PingableComponent::Multicast_PingSound_Implementation() {
}

EIGS_TeamSideEnum UIGS_PingableComponent::GetOwnerTeamSide() const {
    return EIGS_TeamSideEnum::TS_Heisters;
}

void UIGS_PingableComponent::EndPing() {
}

void UIGS_PingableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_PingableComponent, mR_bCanBePinged);
    DOREPLIFETIME(UIGS_PingableComponent, mR_bIsPinged);
}


