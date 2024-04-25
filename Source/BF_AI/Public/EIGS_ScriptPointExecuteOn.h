#pragma once
#include "CoreMinimal.h"
#include "EIGS_ScriptPointExecuteOn.generated.h"

UENUM(BlueprintType)
enum class EIGS_ScriptPointExecuteOn : uint8 {
    ExecuteOn_Arrive,
    ExecuteOn_Approach,
    ExecuteOn_Visit,
};

