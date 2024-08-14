#pragma once
#include "CoreMinimal.h"
#include "EIGS_HitMarkersSetting.generated.h"

UENUM(BlueprintType)
enum class EIGS_HitMarkersSetting : uint8 {
    None,
    Kill,
    All,
};

