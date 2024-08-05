#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_Common_SaveDevSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config="DeveloperSettings/Dev_CommonSaveSettings")
class COMMON_SAVE_API UIGS_Common_SaveDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShippingSaveFilesLimit;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeveloperSaveFilesLimit;
    
    UIGS_Common_SaveDevSettings();

};

