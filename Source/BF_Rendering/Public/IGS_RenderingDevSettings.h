#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_RenderingDevSettings.generated.h"

class UIGS_GlobalPostProcessesDataAsset;

UCLASS(Blueprintable, DefaultConfig, Config="DeveloperSettings/Dev_RenderingSettings")
class BF_RENDERING_API UIGS_RenderingDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_GlobalPostProcessesDataAsset> GlobalPostProcessesDataAsset;
    
    UIGS_RenderingDevSettings();

};

