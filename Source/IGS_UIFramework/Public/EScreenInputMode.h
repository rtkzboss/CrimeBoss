#pragma once
#include "CoreMinimal.h"
#include "EScreenInputMode.generated.h"

UENUM(BlueprintType)
enum class EScreenInputMode : uint8 {
    NoChange,
    GameAndUI,
    UIOnly,
    GameOnly,
};

