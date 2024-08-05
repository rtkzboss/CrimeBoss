#pragma once
#include "CoreMinimal.h"
#include "EVectorSideEnum.generated.h"

UENUM(BlueprintType)
enum class EVectorSideEnum : uint8 {
    VS_Forward,
    VS_Right45,
    VS_Right90,
    VS_Right135,
    VS_Left45,
    VS_Left90,
    VS_Left135,
    VS_BackwardRight,
    VS_BackwardLeft,
    VS_MAX UMETA(Hidden),
    VS_INVALID = 255,
};

