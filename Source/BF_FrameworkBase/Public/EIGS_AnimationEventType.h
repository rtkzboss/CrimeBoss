#pragma once
#include "CoreMinimal.h"
#include "EIGS_AnimationEventType.generated.h"

UENUM(BlueprintType)
enum class EIGS_AnimationEventType : uint8 {
    Event_Unknown = 255,
    Event_Default = 0,
    Event_InAnim,
    Event_LoopAnim,
    Event_OutAnim,
    Event_BreakAnim,
};

