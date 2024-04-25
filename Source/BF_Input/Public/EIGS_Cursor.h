#pragma once
#include "CoreMinimal.h"
#include "EIGS_Cursor.generated.h"

UENUM(BlueprintType)
enum class EIGS_Cursor : uint8 {
    INVALID = 255,
    NativeNormal = 0,
    NativeHover,
    VirtualNormal,
    VirtualHover,
    MAX,
};

