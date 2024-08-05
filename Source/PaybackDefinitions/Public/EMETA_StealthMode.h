#pragma once
#include "CoreMinimal.h"
#include "EMETA_StealthMode.generated.h"

UENUM(BlueprintType)
enum class EMETA_StealthMode : uint8 {
    NotAvailable,
    Supported,
    Required,
};

