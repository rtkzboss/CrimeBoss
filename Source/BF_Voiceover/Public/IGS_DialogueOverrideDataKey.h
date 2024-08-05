#pragma once
#include "CoreMinimal.h"
#include "IGS_DialogueOverrideDataKey.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_DialogueOverrideDataKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DialogueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LineOrder;
    
    FIGS_DialogueOverrideDataKey();
};
FORCEINLINE uint32 GetTypeHash(const FIGS_DialogueOverrideDataKey) { return 0; }

