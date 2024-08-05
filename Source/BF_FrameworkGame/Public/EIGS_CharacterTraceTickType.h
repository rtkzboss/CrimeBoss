#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterTraceTickType.generated.h"

UENUM(BlueprintType)
enum class EIGS_CharacterTraceTickType : uint8 {
    TraceTick_MainLean,
    TraceTick_SidesLean,
    TraceTick_Mantle,
};

