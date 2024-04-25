#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueNodeKey.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_DialogueNodeKey {
    GENERATED_BODY()
public:
    FIGS_DialogueNodeKey();
};
FORCEINLINE uint32 GetTypeHash(const FIGS_DialogueNodeKey) { return 0; }

