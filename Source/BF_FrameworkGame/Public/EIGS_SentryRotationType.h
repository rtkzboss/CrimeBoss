#pragma once
#include "CoreMinimal.h"
#include "EIGS_SentryRotationType.generated.h"

UENUM(BlueprintType)
enum class EIGS_SentryRotationType : uint8 {
    None,
    Point,
    Actor,
};

