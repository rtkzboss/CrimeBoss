#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_LevelGeneratorDevSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config="DeveloperSettings/Dev_LevelGeneratorSettings")
class BF_LEVELGENERATOR_API UIGS_LevelGeneratorDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> HubPresetsDataTable;
    
    UIGS_LevelGeneratorDevSettings();

};

