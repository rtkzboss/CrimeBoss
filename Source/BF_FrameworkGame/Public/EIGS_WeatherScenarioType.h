#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeatherScenarioType.generated.h"

UENUM(BlueprintType)
enum class EIGS_WeatherScenarioType : uint8 {
    Weather_ClearSky,
    Weather_DryOvercast,
    Weather_WetOvercast,
    Weather_LightRain,
    Weather_MediumRain,
    Weather_HeavyRain,
};

