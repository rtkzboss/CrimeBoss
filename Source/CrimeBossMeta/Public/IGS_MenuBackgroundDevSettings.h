#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_MenuBackgroundDevSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config="DeveloperSettings/Dev_CrimeBossMetaSettings")
class CRIMEBOSSMETA_API UIGS_MenuBackgroundDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> BossBackgroundDataTable;
    
    UIGS_MenuBackgroundDevSettings();

};

