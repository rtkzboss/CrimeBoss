#pragma once
#include "CoreMinimal.h"
#include "EIGS_PushType.generated.h"

UENUM(BlueprintType)
enum class EIGS_PushType : uint8 {
    Push_Unknown = 255,
    Push_Front = 0,
    Push_Left,
    Push_Back,
    Push_Right,
};

