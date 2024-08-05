#pragma once
#include "CoreMinimal.h"
#include "EMETA_ObjectType.generated.h"

UENUM(BlueprintType)
enum class EMETA_ObjectType : uint8 {
    None,
    Character,
    Weapon,
    PlotlineAsset,
    Equipment,
};

