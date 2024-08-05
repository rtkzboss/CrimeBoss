#pragma once
#include "CoreMinimal.h"
#include "EIGS_CameraOutlineState.generated.h"

UENUM(BlueprintType)
enum class EIGS_CameraOutlineState : uint8 {
    None,
    Visible,
    Blinking,
    VisibleThroughWalls = 4,
    DangerousVisibleThroughWalls = 8,
    DetectingVisibleThroughWalls,
    Objective = 32,
    Heister = 64,
    Heister2,
    Heister3,
    Heister4,
    Heister_SP = 74,
    Heister2_SP,
    Heister3_SP,
    Heister4_SP,
    Highlight = 124,
    RobotHighlight = 161,
    EscapeVanPing,
    DynamicScopeMesh = 168,
    FirstPersonArms,
};

