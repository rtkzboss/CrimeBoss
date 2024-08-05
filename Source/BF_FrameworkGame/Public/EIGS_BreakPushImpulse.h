#pragma once
#include "CoreMinimal.h"
#include "EIGS_BreakPushImpulse.generated.h"

UENUM(BlueprintType)
enum class EIGS_BreakPushImpulse : uint8 {
    Break_Impulse_None,
    Break_Impulse_Forward,
    Break_Impulse_Right,
    Break_Impulse_Up,
    Break_Impulse_Custom,
};

