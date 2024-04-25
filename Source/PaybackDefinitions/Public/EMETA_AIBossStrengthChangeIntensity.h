#pragma once
#include "CoreMinimal.h"
#include "EMETA_AIBossStrengthChangeIntensity.generated.h"

UENUM(BlueprintType)
enum class EMETA_AIBossStrengthChangeIntensity : uint8 {
    None,
    Weakness_Low,
    Weakness_Medium,
    Weakness_High,
    Power_Low,
    Power_Medium,
    Power_High,
};

