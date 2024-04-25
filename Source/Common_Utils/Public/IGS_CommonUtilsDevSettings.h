#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_CommonUtilsDevSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, DefaultConfig, Config="DeveloperSettings/Dev_CommonUtilsSettings")
class COMMON_UTILS_API UIGS_CommonUtilsDevSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> EntitlementsDataTable;
    
    UIGS_CommonUtilsDevSettings();

};

