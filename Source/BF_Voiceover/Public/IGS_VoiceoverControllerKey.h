#pragma once
#include "CoreMinimal.h"
#include "IGS_VoiceoverControllerKey.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_VoiceoverControllerKey {
    GENERATED_BODY()
public:
    FIGS_VoiceoverControllerKey();
};
FORCEINLINE uint32 GetTypeHash(const FIGS_VoiceoverControllerKey) { return 0; }

