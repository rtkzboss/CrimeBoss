#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "IGS_FrameworkGameDevSettings_Base.generated.h"

UCLASS(Abstract, Blueprintable, DefaultConfig, Config="DeveloperSettings/Dev_FrameworkGameSettings")
class BF_FRAMEWORKGAME_API UIGS_FrameworkGameDevSettings_Base : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIGS_FrameworkGameDevSettings_Base();

};

