#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_CrimeBossMetaDevSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config="DeveloperSettings/Dev_CrimeBossMetaSettings")
class CRIMEBOSSMETA_API UIGS_CrimeBossMetaDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> PlotlineAssetsDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> RandEventsDataTable;
    
    UIGS_CrimeBossMetaDevSettings();

};

