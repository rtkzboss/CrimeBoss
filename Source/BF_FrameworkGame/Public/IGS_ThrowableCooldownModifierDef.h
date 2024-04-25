#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableCooldownModifierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_ThrowableCooldownModifierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalCooldownMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowableCooldownMultiplier;
    
    FIGS_ThrowableCooldownModifierDef();
};

