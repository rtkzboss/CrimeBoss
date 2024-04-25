#pragma once
#include "CoreMinimal.h"
#include "ECustomizableObjectRelevancy.generated.h"

UENUM(BlueprintType)
enum class ECustomizableObjectRelevancy : uint8 {
    All,
    ClientOnly,
};

