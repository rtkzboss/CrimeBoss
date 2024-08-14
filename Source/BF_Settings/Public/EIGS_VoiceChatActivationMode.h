#pragma once
#include "CoreMinimal.h"
#include "EIGS_VoiceChatActivationMode.generated.h"

UENUM(BlueprintType)
enum class EIGS_VoiceChatActivationMode : uint8 {
    VoiceThreshold,
    PushToTalk,
};

