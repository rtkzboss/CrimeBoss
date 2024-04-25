#pragma once
#include "CoreMinimal.h"
#include "EPrintLogPrefix.generated.h"

UENUM()
enum class EPrintLogPrefix : int32 {
    ClassFunction,
    Class,
    Function,
    None,
};

