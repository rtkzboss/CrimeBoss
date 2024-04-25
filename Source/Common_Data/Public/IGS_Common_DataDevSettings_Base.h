#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_Common_DataDevSettings_Base.generated.h"

UCLASS(Abstract, Blueprintable, DefaultConfig, Config="DeveloperSettings/Dev_CommonDataSettings")
class COMMON_DATA_API UIGS_Common_DataDevSettings_Base : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_Common_DataDevSettings_Base();

};

