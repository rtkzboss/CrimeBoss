#pragma once
#include "CoreMinimal.h"
#include "EMETA_MediaNodeType.generated.h"

UENUM(BlueprintType)
enum class EMETA_MediaNodeType : uint8 {
    None,
    Cutscene,
    Movie,
    TextScreen,
};

