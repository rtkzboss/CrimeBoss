#pragma once
#include "CoreMinimal.h"
#include "EMETA_GraphStatus.generated.h"

UENUM(BlueprintType)
enum class EMETA_GraphStatus : uint8 {
    Active,
    Deactive,
};

