#pragma once
#include "CoreMinimal.h"
#include "EIGS_EquipmentResourceType.generated.h"

UENUM(BlueprintType)
enum class EIGS_EquipmentResourceType : uint8 {
    ERT_Charges,
    ERT_Cooldown,
    ERT_Custom = 100,
};

