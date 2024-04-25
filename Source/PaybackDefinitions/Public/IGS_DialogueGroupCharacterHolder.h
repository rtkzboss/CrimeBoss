#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueGroup.h"
#include "IGS_DialogueGroupCharacterHolder.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FIGS_DialogueGroupCharacterHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_DialogueGroup DialogueGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DialogueCharacter;
    
    FIGS_DialogueGroupCharacterHolder();
};
FORCEINLINE uint32 GetTypeHash(const FIGS_DialogueGroupCharacterHolder) { return 0; }

