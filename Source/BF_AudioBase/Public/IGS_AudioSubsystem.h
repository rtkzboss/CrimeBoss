#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "IGS_AudioSubsystem.generated.h"

class UIGS_AkVoiceInputComponent;
class UIGS_AudioSubsystemDataAsset;
class UIGS_PersistentAkComponent;

UCLASS(Blueprintable)
class BF_AUDIOBASE_API UIGS_AudioSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PersistentAkComponent* PersistenAudioAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_AkVoiceInputComponent* VoiceInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AudioSubsystemDataAsset* Data;
    
public:
    UIGS_AudioSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void OnControllerHeadphonesConnectionChanged(bool inIsConnected);
    
};

