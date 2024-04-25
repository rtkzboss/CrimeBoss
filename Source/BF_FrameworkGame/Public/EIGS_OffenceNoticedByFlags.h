#pragma once
#include "CoreMinimal.h"
#include "EIGS_OffenceNoticedByFlags.generated.h"

UENUM(BlueprintType)
enum class EIGS_OffenceNoticedByFlags : uint8 {
    Notices_Security,
    Notices_Camera,
    Notices_Employees,
    Notices_Civilians,
    Notices_Gangsters,
};

