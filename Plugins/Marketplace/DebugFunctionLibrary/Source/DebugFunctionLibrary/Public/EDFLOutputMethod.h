#pragma once
#include "CoreMinimal.h"
#include "EDFLOutputMethod.generated.h"

UENUM(BlueprintType)
enum class EDFLOutputMethod : uint8 {
    PrintOutputLog,
    Print,
    OutputLog,
    None,
};

