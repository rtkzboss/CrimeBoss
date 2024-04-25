#pragma once
#include "CoreMinimal.h"
#include "EIGS_AIStealthLootBehavior.generated.h"

UENUM(BlueprintType)
enum class EIGS_AIStealthLootBehavior : uint8 {
    Always,
    OnlySilent,
    NeverStealth,
    Never,
};

