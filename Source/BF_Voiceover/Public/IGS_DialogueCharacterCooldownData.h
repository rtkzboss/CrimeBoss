#pragma once
#include "CoreMinimal.h"
#include "EIGS_DialogueCharacterCooldown.h"
#include "IGS_DialogueCharacterCooldownData.generated.h"

USTRUCT(BlueprintType)
struct BF_VOICEOVER_API FIGS_DialogueCharacterCooldownData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_DialogueCharacterCooldown StealthCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_DialogueCharacterCooldown LimboCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_DialogueCharacterCooldown ControlCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_DialogueCharacterCooldown AssaultCooldown;
    
    FIGS_DialogueCharacterCooldownData();
};

