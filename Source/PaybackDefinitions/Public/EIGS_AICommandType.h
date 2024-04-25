#pragma once
#include "CoreMinimal.h"
#include "EIGS_AICommandType.generated.h"

UENUM(BlueprintType)
enum class EIGS_AICommandType : uint8 {
    AICT_Unknown = 255,
    AICT_Search = 0,
    AICT_MoveTo,
    AICT_BreachTakePosition,
    AICT_BreachRemoveDoors,
    AICT_BreachRemoveGate,
    AICT_BreachThrowFlashbang,
    AICT_BreachIn,
    AICT_BreachFight,
    AICT_BreachStackUp,
    AICT_Fight,
    AICT_MoveToWaypoint,
    AICT_UseObject,
    AICT_PlayAnimation,
    AICT_Revive,
    AICT_PlayMocapAnimation,
    AICT_LayOnGround,
    AICT_RotateTo,
    DELETED4,
    DELETED5,
    DELETED6,
    AICT_Wait,
    AICT_BeingRevived,
    AICT_ThrowThrowable,
};

