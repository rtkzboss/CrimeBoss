#pragma once
#include "CoreMinimal.h"
#include "EIGS_TextPlatformName.generated.h"

UENUM(BlueprintType)
enum class EIGS_TextPlatformName : uint8 {
    Windows,
    PS5,
    XSX,
    XSS,
    Other,
    Count,
};

