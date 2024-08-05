#include "IGS_PingableComponent.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_PingableComponent::UIGS_PingableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).bUseRootForOutline = true;
    (*this).bShowOutline = true;
    (*this).PingDuration = -1.000000000e+00f;
    (*this).mR_bCanBePinged = true;
    (*this).PingedAkAudioEvent = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_GUI/Ping/AKE_Ping_Highlight_Generic.AKE_Ping_Highlight_Generic"), TEXT(""));
    (*this).PingedDangerousAkAudioEvent = FSoftObjectPath(TEXT("/Game/WwiseAudio/GeneratedSoundData/SoundBanks/Events/Default_Work_Unit/WU_GUI/Ping/AKE_Ping_Highlight_Dangerous.AKE_Ping_Highlight_Dangerous"), TEXT(""));
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


