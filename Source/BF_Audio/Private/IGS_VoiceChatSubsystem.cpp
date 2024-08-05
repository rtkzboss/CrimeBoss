#include "IGS_VoiceChatSubsystem.h"

UIGS_VoiceChatSubsystem::UIGS_VoiceChatSubsystem() {
}

void UIGS_VoiceChatSubsystem::SetOutput(UObject* WCO, int32 LocalPlayerIndex, const FString& OutputName) {
}

void UIGS_VoiceChatSubsystem::SetInput(UObject* WCO, int32 LocalPlayerIndex, const FString& InputName) {
}

void UIGS_VoiceChatSubsystem::MuteRemotePlayer(UObject* WCO, int32 LocalPlayerIndex, APlayerState* RemotePlayerState, bool Mute) {
}

void UIGS_VoiceChatSubsystem::MuteLocalPlayer(UObject* WCO, int32 LocalPlayerIndex, bool Mute) {
}

bool UIGS_VoiceChatSubsystem::IsVoiceChatSupported(UObject* WCO) {
    return false;
}

bool UIGS_VoiceChatSubsystem::IsVoiceChatEnabled(UObject* WCO) {
    return false;
}

bool UIGS_VoiceChatSubsystem::IsRemotePlayerTalking(UObject* WCO, APlayerState* RemotePlayerState) {
    return false;
}

bool UIGS_VoiceChatSubsystem::IsRemotePlayerMuted(UObject* WCO, int32 LocalPlayerIndex, APlayerState* RemotePlayerState) {
    return false;
}

bool UIGS_VoiceChatSubsystem::IsLocalPlayerTalking(UObject* WCO, int32 LocalPlayerIndex) {
    return false;
}

bool UIGS_VoiceChatSubsystem::IsLocalPlayerMuted(UObject* WCO, int32 LocalPlayerIndex) {
    return false;
}

TArray<FString> UIGS_VoiceChatSubsystem::GetAvailableOutputs(UObject* WCO) {
    return TArray<FString>();
}

TArray<FString> UIGS_VoiceChatSubsystem::GetAvailableInputs(UObject* WCO) {
    return TArray<FString>();
}


