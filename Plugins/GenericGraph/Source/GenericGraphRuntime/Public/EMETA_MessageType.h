#pragma once
#include "CoreMinimal.h"
#include "EMETA_MessageType.generated.h"

UENUM(BlueprintType)
enum class EMETA_MessageType : uint8 {
    Error,
    Warning,
};

