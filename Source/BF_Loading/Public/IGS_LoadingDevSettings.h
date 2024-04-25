#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_LoadingDevSettings.generated.h"

class UDataTable;
class UIGS_LevelTransitionDataAsset;
class UIGS_LoadingScreenDataAsset;

UCLASS(Blueprintable, DefaultConfig, Config="DeveloperSettings/Dev_LoadingSettings")
class BF_LOADING_API UIGS_LoadingDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> LoadingSetupDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> LoadingScreenTipsDataTable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_LevelTransitionDataAsset> LevelTransitionDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_LoadingScreenDataAsset> LoadingScreenDataAsset;
    
    UIGS_LoadingDevSettings();

};

