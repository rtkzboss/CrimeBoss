#pragma once
#include "CoreMinimal.h"
#include "EIGS_MessageType.generated.h"

UENUM(BlueprintType)
enum class EIGS_MessageType : uint8 {
    Message_Everyone,
    Message_Whisper,
    Message_System,
};

