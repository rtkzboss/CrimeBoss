#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_VoiceChatSubsystem.generated.h"

class APlayerState;
class UObject;

UCLASS(Blueprintable)
class BF_AUDIO_API UIGS_VoiceChatSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_VoiceChatSubsystem();

    UFUNCTION(BlueprintCallable)
    static void SetOutput(UObject* WCO, int32 LocalPlayerIndex, const FString& OutputName);
    
    UFUNCTION(BlueprintCallable)
    static void SetInput(UObject* WCO, int32 LocalPlayerIndex, const FString& InputName);
    
    UFUNCTION(BlueprintCallable)
    static void MuteRemotePlayer(UObject* WCO, int32 LocalPlayerIndex, APlayerState* RemotePlayerState, bool Mute);
    
    UFUNCTION(BlueprintCallable)
    static void MuteLocalPlayer(UObject* WCO, int32 LocalPlayerIndex, bool Mute);
    
    UFUNCTION(BlueprintCallable)
    static bool IsVoiceChatSupported(UObject* WCO);
    
    UFUNCTION(BlueprintCallable)
    static bool IsVoiceChatEnabled(UObject* WCO);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRemotePlayerTalking(UObject* WCO, APlayerState* RemotePlayerState);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRemotePlayerMuted(UObject* WCO, int32 LocalPlayerIndex, APlayerState* RemotePlayerState);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLocalPlayerTalking(UObject* WCO, int32 LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLocalPlayerMuted(UObject* WCO, int32 LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAvailableOutputs(UObject* WCO);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAvailableInputs(UObject* WCO);
    
};

