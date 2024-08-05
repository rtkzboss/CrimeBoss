#pragma once
#include "CoreMinimal.h"
#include "EIGS_PlatformName.generated.h"

UENUM(BlueprintType)
enum class EIGS_PlatformName : uint8 {
    PN_Unknown,
    PN_Windows,
    PN_Linux,
    PN_PS5,
    PN_XBSX,
    PN_XBSS,
    PN_Switch,
};

