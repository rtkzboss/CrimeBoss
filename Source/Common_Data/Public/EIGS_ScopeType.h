#pragma once
#include "CoreMinimal.h"
#include "EIGS_ScopeType.generated.h"

UENUM(BlueprintType)
enum class EIGS_ScopeType : uint8 {
    Scope_Normal,
    Scope_Thermal,
    Scope_Nightvision,
    Scope_MAX UMETA(Hidden),
    Scope_INVALID = 255,
};

