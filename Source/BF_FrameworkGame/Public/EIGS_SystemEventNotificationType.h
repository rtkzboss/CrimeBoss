#pragma once
#include "CoreMinimal.h"
#include "EIGS_SystemEventNotificationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SystemEventNotificationType : uint8 {
    Unknown = 255,
    WaveManager = 0,
    SuspicionManager,
};

