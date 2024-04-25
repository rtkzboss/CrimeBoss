#pragma once
#include "CoreMinimal.h"
#include "EBuildConfigurationExecPin.generated.h"

UENUM(BlueprintType)
enum class EBuildConfigurationExecPin : uint8 {
    Debug,
    Development,
    Test,
    Shipping,
};

