#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_AudioDevSettings.generated.h"

class UDataAsset;

UCLASS(Blueprintable, DefaultConfig, Config="DeveloperSettings/Dev_AudioSettings")
class BF_AUDIOBASE_API UIGS_AudioDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataAsset> MusicSubsystemDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataAsset> AudioSubsystemDataAsset;
    
    UIGS_AudioDevSettings();

};

