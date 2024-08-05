#pragma once
#include "CoreMinimal.h"
#include "EIGS_StickyType.generated.h"

UENUM(BlueprintType)
enum class EIGS_StickyType : uint8 {
    StickyType_None,
    StickyType_Static,
    StickyType_Moving,
    StickyType_UNKNOWN = 255,
};

