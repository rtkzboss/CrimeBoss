#pragma once
#include "CoreMinimal.h"
#include "TPP_ActionSlotType.generated.h"

UENUM(BlueprintType)
enum class TPP_ActionSlotType : uint8 {
    EBF_TPP_Throw_Started,
    EBF_TPP_Throw_Finished,
    EBF_TPP_Throw_Canceled,
};

