#pragma once
#include "CoreMinimal.h"
#include "EIGS_CrashDetectType.generated.h"

UENUM(BlueprintType)
enum class EIGS_CrashDetectType : uint8 {
    CDT_None,
    CDT_All,
    CDT_StaticMesh,
    CDT_SkeletalMesh,
    Count,
};

