#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_NetworkDevSettings.generated.h"

class UIGS_ComponentDialogueDataAsset;
class UIGS_ComponentVoiceExpressionDataAsset;

UCLASS(Blueprintable, DefaultConfig, Config="DeveloperSettings/Dev_NetworkSettings")
class BF_NETWORK_API UIGS_NetworkDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_ComponentDialogueDataAsset> DialogueComponentDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_ComponentVoiceExpressionDataAsset> VoiceExpressionComponentDataAsset;
    
    UIGS_NetworkDevSettings();

};

