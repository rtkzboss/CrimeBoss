#pragma once
#include "CoreMinimal.h"
#include "ECombatState.generated.h"

UENUM(BlueprintType)
enum class ECombatState : uint8 {
    CS_Idle,
    CS_Investigating,
    CS_Searching,
    CS_Battle,
};

