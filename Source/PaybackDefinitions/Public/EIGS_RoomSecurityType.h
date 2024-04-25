#pragma once
#include "CoreMinimal.h"
#include "EIGS_RoomSecurityType.generated.h"

UENUM(BlueprintType)
enum class EIGS_RoomSecurityType : uint8 {
    Outside,
    Public,
    Employee,
    Security,
    Civilian,
};

