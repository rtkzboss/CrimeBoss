#pragma once
#include "CoreMinimal.h"
#include "ESpringTypeEnum.generated.h"

UENUM(BlueprintType)
namespace ESpringTypeEnum {
    enum Type {
        ST_Position,
        ST_Rotation,
        ST_Scale,
        ST_PositionAdditive,
        ST_RotationAdditive,
    };
}

